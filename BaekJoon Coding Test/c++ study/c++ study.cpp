#include <iostream>
#include <cmath> //거듭제곱 사용
#include <vector> // 벡터 사용
#include <algorithm> //정렬 사용
#include <string>
using namespace std;

//직사각형에서 탈출하기(백준 1085)
/*
int main()
{
	int x, y, w, h;
	
	cin >> x >> y >> w >> h;
	
	int CompareX = x > (w - x) ? (w - x) : x;
	int CompareY = y > (h - y) ? (h - y) : y;
	 
	cout << ((CompareX > CompareY) ? CompareY : CompareX);
}*/

//직각삼각형(백준 4153)
/*int main()
{
	while (true)
	{
		vector <int> vec;
		int i, inputNum;
		
		for (i = 0; i < 3; i++) {
			cin >> inputNum;
			vec.push_back(inputNum);
		}
		
		sort(vec.begin(), vec.end()); // 정렬하기

		if (vec[0], vec[1], vec[2] == 0) break;

		cout << (pow(vec[0], 2) + pow(vec[1], 2) == pow(vec[2], 2) ? "right\n" : "wrong\n");
	}
}*/

//호텔(백준 10250)
/*int main()
{
	int j,test;
	cin >> test;
	
	for(j = 0; j < test; j++)
	{
		int floor, room, guest;
		int FinalFloor, FinalRoom;
		
		cin >> floor>> room>> guest;
			
		if (guest % floor == 0)
		{
			FinalFloor = floor;
			FinalRoom = guest / floor; //
		}

		else
		{
			FinalFloor = guest % floor;
			FinalRoom = guest / floor + 1;
		}
		

		cout << FinalFloor * 100 + FinalRoom << "\n";
	}
}*/

//분해합 (백준 2231)
/*int main()
{
	int N,i;
	

	cin >> N;

	if (1 > N || N > 1000000) return 0;

	for (i = 1; i <= N; i++)
	{
		int result = 0, h = 0;
        
        h = i;
		while (h > 0)
		{
			result += (h % 10);

			h /= 10;
		}
			
		if (result + i == N && h==0)
		{
			cout << i;

			break;
		}

		
	}
    if(i > N) cout << 0;
}*/

//벌집 (백준 2292)
/*int main()
{
	int  i;
	int N,j;//21억 까지 여서 int
	int h = 1;
	//vector <long long>vec; //벡터로 할려했더니 메모리 오류

	cin >> N;

	if (1 > N || N > 1000000000) return 0;

	//vec.push_back(1);
	if (N == 1) { cout << 1; return 0; }
	
	for (i = 1;; i++)
	{
		for (j=1 ; j<= 6*i ; j++)
		{
			h++;
			
			if (h == N)
			{
				cout << i+1;
				return 0;
			}
		}
	}
}*/


//블랙잭 (백준 2798번)
/*int main()
{
	int N, M;
	int i,j,k;
	int card;
	int sum;
	int best = 0;

	vector <int> vec;

	cin >> N >> M;

	for (i = 0 ; i < N;i++)
	{
		cin >> card;
		vec.push_back(card);
	}

	if (N < 3 || N > 100 || M < 10 || M > 300000 || card > 100000 || card < 1) return 0;

	for (i = 0; i < N; i++){
		for (j = i + 1; j < N; j++) {
			for (k = j + 1; k < N; k++)
			{
				sum = vec[i] + vec[j] + vec[k];

				if (sum <= M && sum > best)
				{
					best = sum;
				}
			}
		}
	}

	cout << best;
}*/


// Hashing (백준 15829번)
/*int main()
{
	char AlphaBet;
	long long L,i;
	long long num; //vec[num] = 'a' 
	long long r = 1; //지수 31거듭제곱
	long long M = 1234567891;
	long long sum = 0;

	vector <char>vec;
	
	for (i = 0; i < 26; i++)
	{
		vec.push_back('a'+ i);
	}
	
	cin >> L;

	if (L < 1 || L>50) return 0;

	for (i = 0; i < L; i++)
	{
		cin >> AlphaBet;

		num = find(vec.begin(), vec.end(), AlphaBet) - vec.begin(); //벡터 값 찾아주기

		sum += ((num + 1)*r);		
		
		if (sum > M) //M값으로 나눠주기 (값이 비정상적으로 커지는것 방지)
		{
			sum %= M;
		}

		r *= 31;
		
		if (r > M) //M값으로 나눠주기 (값이 비정상적으로 커지는것 방지)
		{
			r %= M;
		}
	}
	cout << sum;
}*/


