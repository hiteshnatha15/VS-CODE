#include <iostream>
using namespace std;

int main()
{
    // int n=0;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int even=0;
    // int odd=n-1;

    // while(odd > even){
    //     if(arr[odd]!=0 && arr[even]!=0){
    //         swap(arr[odd],arr[even]);
    //         even++;
    //         odd--;
    //     }
    //     if(arr[odd]%2==0){
    //         odd--;
    //     }
    //     if(arr[even]%2==0){
    //         even++;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // return 0;

    // int n;
    // cin>>n;
    // int arr[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum=sum+arr[0][i]+arr[n-1][i];
    // }
    //     int neeche=1;
    //     int upar=n-2;
    // for(int i=1;i<n-1;i++){
    //     sum=sum+arr[neeche][upar];
    //     neeche++;
    //     upar--;
    // }
    // cout<<sum;

    // string s = "";
    // cin >> s;
    // string t = "";
    // cin >> t;
    // bool flag = false;
    // int position=0;
    // if (s.size() >= t.size())
    // {
    //     for (int i = 0; i < t.size(); i++)
    //     {
    //         flag = false;
    //         for (int j = position+1; j < s.size(); j++)
    //         {
    //             if (t[i] == s[j])
    //             {
    //                 flag = true;
    //                 position=j;
    //                 break;
    //             }
    //             else
    //             {
    //                 flag = false;
    //             }
    //         }
    //         if (!flag)
    //         {
    //             cout << 0;
    //             return 0;
    //         }
    //     }
    //     cout << 1;
    //     return 1;
    // }
    // else
    // {
    //     return 0;
    // }

    // string s = "";
    // cin >> s;
    // for (int i = 0; i < s.size() - 1; i += 2)
    // {
    //     swap(s[i], s[i + 1]);
    // }
    // cout << s;

    int n = 0;
    cin >> n;
    int a = 0;
    cin >> a;

    if (a <= n || a % n == 0 || (a - 1) % n == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}