#include <iostream>

class Board{
	public:
		int size = 15;
		char matrix[15][15];
		Board(){
			int i,j;
			size = 15;
			for(i=0; i<size; i++){
				for(j=0; j<size; j++){
					this->matrix[i][j] = 'o';
				}
			}
		}
		void setSize(int s){
			size = s;
			if(s % 2 == 1) printf("Numarul este impar!");
		}
		void show(){
			int i, j;
			for(i=0; i<size; i++){
				for(j=0; j<size; j++){
					printf("%c  ",matrix[i][j]);
				}
				printf("\n");
			}
		}

		void setElement(int i, int j, char elem){
			this->matrix[i][j] = elem;
		}

		};


int main(){

	Board board;
	// board.setElement(3,4,'i');
	// board.setElement(5,6, 'x');
	board.show();

	while(true){
		
		
		int i, j;
		char c;
		scanf("%d %d %c", &i, &j, &c);
		board.setElement(i, j, c);
		board.show();
		printf("\n");
	}

	return 0;
}
