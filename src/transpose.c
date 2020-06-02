#include <stdio.h>

void transpose(int m[][3], int row);
void print_matrix(int m[][3], int row_size, int col_size);

void transpose(int m[][3], int row){
  int temp[3][3];
  for (int i = 0; i < 3; i++)
      for(int j = 0; j < 3; j++)
           temp[j][i] = m[i][j];

        for(int i = 0; i < 3; i++)
          for(int j = 0; j < 3; j++)
                m[i][j] = temp[i][j];

        for(int i = 0; i < 3; i++){
               for(int j = 0; j < 3; j++)
                      printf("%2d ", m[i][j]);
          printf("\n");
        }
}

void print_matrix(int m[][3], int row_size, int col_size){
        int i, j;
        for(i = 0; i < row_size; i++){
            for (j = 0; j < col_size; j++)
                printf("%2d ", m[i][j]);
        printf("\n");
        }
}

int main(){
  int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  printf("Before Transpose\n");
  print_matrix(m, 3, 3);
  printf("After Transpose\n");
  transpose(m, 3);
  return 0;
}