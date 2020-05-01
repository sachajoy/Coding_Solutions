#include<bits/stdc++.h>
using namespace std;
#define N 10
char crossword[N][N];

bool is_valid_v(int r, int c, string word){
    // cout << "is_v -" << r <<'-' << c << endl;
    int count=0;
    for(int i=r; i<N; i++){
        if(crossword[i][c] != '-'){
            if(crossword[i][c] == word[count]){
                count = count;
            }else{
                break;
            }
        }
        count++;
    }
    // cout << "is_v count - " << count << endl;
    if(count == word.size()){
        return true;
    }else{
        return false;
    }

}

bool is_valid_h(int r, int c, string word){
    // cout << "is_h -" << r <<'-' << c << endl;
    int count=0;
    for(int i=c; i<N; i++){
        if(crossword[r][i] != '-'){
            if(crossword[r][i] == word[count]){
                count = count;
            }else{
                break;
            }
        }
        count++;
    }
    if(count == word.size()){
        return true;
    }else{
        return false;
    }

}

void set_vertical(int r, int c, bool *helper, string word){
    // cout << "set_v -" << word << '-' << r <<'-' << c << endl;

    for(int i=0; i<word.size(); i++){
        if(crossword[i+r][c] != '-'){
            helper[i] = false;
        }else{
            helper[i] = true;
        }
        crossword[i+r][c] = word[i];
    }
}
void set_horizontal(int r, int c, bool *helper, string word){
    // cout << "set_h -" << word << '-' << r <<'-' << c << endl;

    for(int i=0; i<word.size(); i++){
        if(crossword[r][i+c] != '-'){
            helper[i] = false;
        }else{
            helper[i] = true;
        }
        crossword[r][i+c] = word[i];
    }
}

void reset_vertical(int r, int c, bool *helper, int size, string word){
    // cout << "reset_v - " << word << " - " << r <<'-' << 'c' << endl; 
    for(int i=0; i<size; i++){
        if(helper[i] == true){
            crossword[i+r][c] = '-';
        }
    }
}

void reset_horizontal(int r, int c, bool *helper, int size, string word){
    // cout << "reset_h - " << word << " - " << r <<'-' << c << endl; 
    for(int i=0; i<size; i++){
        if(helper[i] == true){
            crossword[r][i+c] = '-';
        }
    }
}


bool solver(string *words, int size, int index){
    //base case
    if(index == size){
        return true;
    }
    // cout <<"solver - " <<  words[index] << endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(crossword[i][j] == '-' || crossword[i][j] == words[index][0]){
                if(is_valid_v(i,j, words[index])){
                    bool *helper = new bool[size];
                    set_vertical(i, j, helper, words[index]);
                    bool is_valid = solver(words, size, index+1);
                    if(is_valid){
                        return true;
                    }else{
                        reset_vertical(i, j, helper, words[index].size(), words[index]);
                    }
                }
                if(is_valid_h(i,j, words[index])){
                    bool *helper = new bool[size];
                    set_horizontal(i, j, helper, words[index]);
                    bool is_valid = solver(words, size, index+1);
                    if(is_valid){
                        return true;
                    }else{
                        reset_horizontal(i, j, helper, words[index].size(), words[index]);
                    }
                }
            }
        }
    }
    return false;
}

int main() {
	string ss;
	for(int i = 0; i<10; i++){
		cin >>ss;
		for(int j = 0; j < ss.size(); j++){
			crossword[i][j] =  ss[j];
		}
	}
 
	char s[200];
	cin >> s;
 
	string input[10];
	char ch;
	string word ="";
	int a =0;
	for (int i = 0; s[i] != '\0'; ++i)
	{
 
		if(s[i] == ';'){
			input[a++] = word;
			word ="";
		}
		else {
			word += s[i];
		}
	}
	input[a++] = word;
    solver(input, a, 0);
    for(int i =0; i<10; i++){
			for(int j=0; j<10; j++){
 
				cout << crossword[i][j] ;
			}
			cout << endl;
		}

}
