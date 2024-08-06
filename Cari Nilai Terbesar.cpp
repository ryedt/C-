#include <iostream>

using namespace std;

int main()
{
	cout<<"Program C++ Cari Nilai Terbesar"<<endl;
	cout<<endl;
	
	int input[100], arr_count, i, max_num;
	
	cout<<"Input jumlah elemment Array: ";
	cin>>arr_count;
	
	cout<<"Input "<<arr_count<<"angka(dipisah dengan enter): ";
	cout<<endl;
	
	for(i=0 ; i < arr_count; i++){
		cin>>input[i];
	}
	
	cout<<endl;
	
	max_num = input[0];

	for(i=0;i<arr_count;i++){
		if(input[i]>max_num){
			max_num=input[i];
		}
	}
	
	cout<<"Angka terbesar adalah: "<<max_num;
	
	cout<<endl;
	return 0;
}
