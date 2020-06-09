#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
vector <int> *adj;
int xcent;
int ycent;
int n;
int *vis;
int *path;


class Test
{
public:
	int x;
	int y;
	int z;

	bool operator < (  Test const &rhs)const {
		return (x < rhs.x);
	}
	bool operator > (  Test const &rhs)const {
		return (x > rhs.x);
	}
};
int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);

//////////////////////////////////////start...............

	set<Test>s;
	s.insert({2, 3, 4});
	s.insert({1, 3, 2});
	s.insert({7, 3, 4});
	s.insert({4, 3, 4});
	s.insert({5, 3, 4});


	for (auto i : s)
	{
		cout << s.x << " " << s.y << " " << s.z << endl;
	}







/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
//printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line

