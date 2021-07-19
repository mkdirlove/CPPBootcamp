#include <iostream>
using namespace std;

// compulsorily: atleast col dimension
void input_array(int arr[][10], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
}

// print: 
void print_array(int arr[][10], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

// m, n = 4
//  6 7 9 2
//  1 2 3 4
//  2 3 2 1
//  8 6 4 3
// ans = 6 * 2 * 2 * 3 = main diagonal
     // 00   11  22   33
int diag_product(int arr[][10], int m, int n){
	int prod = 1;
	for(int i = 0; i < m; i++){
		prod = prod * arr[i][i];
	}
	return prod;

}

int main() {

	int mat[10][10];

	int m, n;
	cin >> m >> n;

	cout << "Enter the matrix:\n";
	input_array(mat, m, n);
    
	cout << "The matrix is: \n";
	print_array(mat, m, n);


    cout << "The main diag. product is: \n";
	int prod = diag_product(mat, m, n);
	cout << prod << endl;
  
}