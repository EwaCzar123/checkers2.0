#include <iostream> 
#include <cmath>
#include<string>
#include <fstream>

using namespace std;

class game_state {
	float Sb, Sc;
	int lb, lc, pb, pc, bc, bb;
	void set_variables(int&,int&,int&,int&,int&,int&);
	bool state;
	void state_value(bool&);
	int move_num;
public:
	char board[6][6] =
	{
		{ ' ', 'C', ' ', 'C', ' ', 'C' },
		{ 'C', ' ', 'C', ' ', 'C', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', ' ', ' ', ' ', ' ', ' ' },
		{ ' ', 'B', ' ', 'B', ' ', 'B' },
		{ 'B', ' ', 'B', ' ', 'B', ' ' } };
	

}game_st;

void game_state::state_value(bool &state) 
{
	state = true;
	if (game_state::move_num == 10)
	{
		state = false;
	}

};
void game_state::set_variables(int &lb, int &lc, int &pb,int &pc, int &bb, int&bc) 
{
	lb = 0, lc = 0, pc = 0, pb = 0, bb = 0, bc = 0;
	for (int i = 0; i++; i < 6) 
	{
		for (int j; j++; j < 6) 
		{
			if (board[i][j] == 'B') 
			{
				lb++;
				{
				if (board[i - 1][j - 1] == ' ')
				{
					pb++;
				}
				if (board[i + 1][j - 1] == ' ')
				{
					pb++;
				}
					if (i>0 && j<5 && i<5 && board[i - 1][j + 1] == 'B'&& board[i+1][j+1]=='B')
					{
						bb++;
					}
				}
			}
			if (board[i][j] == 'C') 
			{
				lc++;
				if (board[i - 1][j - 1] == ' ')
				{
					pc++;
				}
				if (board[i + 1][j - 1] == ' ')
				{
					pc++;
				}
				if (i>0 && j<5 && i<5 && board[i - 1][j + 1] == 'B'&& board[i + 1][j + 1] == 'B')
				{
					bb++;
				}
			}
		}
	}
};


class game_node {
public:
	game_state state;

};
class game {};

float Sb, Sc;
float wb, wp, wl;
int lb=6, lc=6, pb=0, pc=0, bc=3, bb=3;

Sb = wl*(lb - lc) + wb*(bc - bb) + wp*(pc - pb);
Sc = -Sb;

//pc
for (int i = 0; i++; i < 7)
{
	for (int j = 0; j++; j < 7) {
		if (board[i][j] == 'B') {
			if (board[i][j - 1] = ' ') {
				pc++;
			}
		}
	}
}


for(i=0;i++;i<7{
	{for (j = 0; j++; j < 7) {
		if (board[i][j] == 'B') {
			if (board[i - 1][j + 1] = ' ') {
				Nmb=Nmb+1;
			}
			if (board[i + 1][j + 1] = ' ') {
				Nmb = Nmb + 1;
			}
		}
	}}
	char move() {
		
	return(board[][])
	}

	
	struct bigtree{
		float Sb;
		struct tree *child[12];
		struct tree *root;

bool read_arg(int quant, char** arg, float & wl, float & wb, float & wp)

{
	const string wlLabel("wl");
	const string wbLabel("wb");
	const string wpLabel("wp");
	bool Wl = false;	// zmienna okreœlaj¹ca stan pliku wejsciowego
	bool Wp = false;
	bool Wb = false;
	for (int i = 1; i < quant - 1; i++) {
		string arg1(arg[i]);
		if (arg1 == wlLabel) {	//identyfikacja parametru wejœciowego
			string num = arg[i + 1];
			
				wl = stoi(num);//musze zmienic funkcje stoi, albo dac try bo mozliwy blad
				Wl = true;

		}
		if (arg1 == wpLabel) {
			string num = arg[i + 1];
			wp = stoi(num);
			Wp = true;
		}
		if (arg1 == wbLabel) {
			string num = arg[i + 1];
			wb = stoi(num);
				Wb = true;
		}
	}
	return(Wb && Wp && Wl);

}
char board[6][6] =
{
	{ ' ', 'C', ' ', 'C', ' ', 'C' },
	{ 'C', ' ', 'C', ' ', 'C', ' ' },
	{ ' ', ' ', ' ', ' ', ' ', ' ' },
	{ ' ', ' ', ' ', ' ', ' ', ' ' },
	{ ' ', 'B', ' ', 'B', ' ', 'B' },
	{ 'B', ' ', 'B', ' ', 'B', ' ' },
};
void display_board()
{
	cout << "====================================================\n\n";
	cout << "      0       1       2       3       4       5     \n";
	cout << "   _______________________________________________\n";
	cout << "  |       |       |       |       |       |       |\n";
	cout << "0 |    " << board[0][0] << "  |    " << board[0][1] << "  |  " << board[0][2] << "    |  " << board[0][3] << "    |    " << board[0][4] << "  |    " << board[0][5] << "  |\n";
	cout << "  |_______|_______|_______|_______|_______|_______|\n";
	cout << "  |       |       |       |       |       |       |\n";	
	cout << "1 |    " << board[1][0] << "  |    " << board[1][1] << "  |    " << board[1][2] << "  |    " << board[1][3] << "  |    " << board[1][4] << "  |    " << board[1][5] << "  |\n";
	cout << "  |_______|_______|_______|_______|_______|_______|\n";
	cout << "  |       |       |       |       |       |       |\n";	
	cout << "2 |    " << board[2][0] << "  |    " << board[2][1] << "  |    " << board[2][2] << "  |    " << board[2][3] << "  |    " << board[2][4] << "  |    " << board[2][5] << "  |\n";
	cout << "  |_______|_______|_______|_______|_______|_______|\n";
	cout << "  |       |       |       |       |       |       |\n";
	cout << "3 |    " << board[3][0] << "  |    " << board[3][1] << "  |    " << board[3][2] << "  |    " << board[3][3] << "  |    " << board[3][4] << "  |    " << board[3][5] << "  |\n";
	cout << "  |_______|_______|_______|_______|_______|_______|\n";
	cout << "  |       |       |       |       |       |       |\n";
	cout << "4 |    " << board[4][0] << "  |    " << board[4][1] << "  |    " << board[4][2] << "  |    " << board[4][3] << "  |    " << board[4][4] << "  |    " << board[4][5] << "  |\n";
	cout << "  |_______|_______|_______|_______|_______|_______|\n";
	cout << "  |       |       |       |       |       |       |\n";
	cout << "5 |    " << board[5][0] << "  |    " << board[5][1] << "  |    " << board[5][2] << "  |    " << board[5][3] << "  |    " << board[5][4] << "  |    " << board[5][5] << "  |\n";
	cout << "  |_______|_______|_______|_______|_______|_______|\n";

}




int main(int argc, char* argv[])
{

	
	display_board();
	int a;
	cin >> a;
	return 0;
}
