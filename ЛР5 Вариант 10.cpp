#include <iostream>
using namespace std;
const int m = 5;
int a[m][m];
int main()
{
srand(time(0));
for (int i = 0; i < m; ++i)
{
for (int j = 0; j < m; ++j)
{
a[i][j] = rand() % 100 - 25;
cout << a[i][j] << " ";
}
cout << endl;
}
for (int i = 0; i < m; ++i)
{
for (int j = 0; j < m; ++j)
{
if (a[i][j] < 0)
{
for (int j = 0; j < m; ++j)
{
a[i][j] = 0;
}
cout << endl;
}
}
}
for (int i = 0; i < m; ++i) {
for (int j = 0; j < m; ++j) {
if (a[i][j] == 0) {
for (int k = i + 1; k < m; ++k) {
if (a[k][j] != 0) {
int c = a[i][j];
a[i][j] = a[k][j];
a[k][j] = c;
}
}
}
}

}
cout << endl;
for (int i = 0; i < m; ++i)
{
for (int j = 0; j < m; ++j)
{
cout << a[i][j] << " ";
}
cout << endl;
}
return 0;
}