#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int convert_to_number(vector<int> & digits)
{   int number=0;
    for(int i=0;i<=digits.size() -1;i++)
    {
        number=number + digits[i]*pow(10,digits.size()-1-i);
    }
    return number;
}

vector<int> plusone(vector<int> & digits)
{
    int number = convert_to_number(digits) + 1;
    digits.clear();
    
    while(number)
    {
        digits.push_back(number%10);
        number=number/10;
    }
    reverse(digits.begin(), digits.end());
	return digits;
}


int main()
{
	vector<int> digits{9,9,9};
    vector<int> update = plusone(digits);

    for(int i: update)
        cout<<i;
    cout<<endl;
}
