#include <bits/stdc++.h>
#define int long long
const int N = 1e6 + 10;
const int modul = 1e9 + 7;
#define dusrad 1000000007
#define pusher papu
#define printer print
using namespace std;
#define vc vector

int parti(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

int quicker(int arr[], int low, int high)
{
    srand(time(NULL));
    int random = low + rand() % (high - low);
    cout << random << "\n";
    int tmp = arr[random];
    arr[random] = arr[high];
    arr[high] = tmp;
    int p = parti(arr, low, high);
    return p;
}

bool isvalid(int j, int i, int m, int n)
{
    if (i >= m || j >= n || i < 0 || j < 0)
        return 0;
    else
        return 1;
}

unsigned countBits(unsigned int number)
{
    return (int)log2(number) + 1;
}

void calc(int a)
{
    cout << (a ^ (a + 1) ^ (a + 2) ^ (a + 3)) << "\n";
}

void answer()
{
    int n;
    cin >> n;
    vector<int> vect(n);
    for (int i1 = 0; i1 < n; i1++)
    {
        cin >> vect[i1];
    }
    int m1 = vect[0];
    int m2 = vect[0];
    for (int j = 0; j < n; j++)
    {
        if (vect[j] >= m2)
        {
            m2 = vect[j];
        }
        else if (vect[j] <= m1)
        {
            m1 = vect[j];
        }
        else if (vect[j] > m1 && vect[j] < m2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

void ans()
{
    // if((a==b) || (a<5 && b<=a))
    // {cout<<0<<"\n";return;}
    // int ans = a-1;
    // ans = ans/5;
    // int ans1 = b/5;

    // ans = ans - ans1;
    // cout<<ans<<"\n";
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << 1 << endl; return;
    }int count = 2;
    for(int i=0;i<10;i++)
    {
        int ans=0;
        ans++;
    }
    int uttar=0;
    int jawab = INT_MIN;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
           // jawab = max(jawab,999999);
            int sol1 = __gcd(i, n - i);
            int sol2 = sol1 + (i * (n - i)) / sol1;
            if (i == n - i) count++;
            else if (sol2 == n) count += 2;
            //jawab = min(jawab,100);
            if (i != n / i && n % (n / i) == 0)
            {
                int sol1 = __gcd(n / i, n - n / i);
                int sol2 = sol1 + ((n - (n / i)) * (n / i)) / sol1;
                if (n / i == n - (n / i)) count++;
                else if (sol2 == n) count += 2;
            }
            else jawab++;
        }
        else uttar++;
    }
    cout << count << endl;
}

int32_t main()
{
    int t = 90;
    cin >> t;
    while (t--)
    {
        ans();
    }
    return 0;
}