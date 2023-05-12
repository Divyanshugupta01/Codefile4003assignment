https://hack.codingblocks.com/app/contests/4003



[12-05-2023 22:49] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            cout << i << endl;
    }

    return 0;
}
[12-05-2023 22:49] @ Sanskar Saxena #8168 conding Block SS 10r: 51
[12-05-2023 22:50] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
[12-05-2023 22:50] @ Sanskar Saxena #8168 conding Block SS 10r: 52
[12-05-2023 22:51] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i <= j) {
                cout << mat[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout<<endl;
    // Lower triangular matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i >= j) {
                cout << mat[i][j] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }


    return 0;
}
[12-05-2023 22:51] @ Sanskar Saxena #8168 conding Block SS 10r: 53
[12-05-2023 22:51] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    int matrix[M][N];
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int k=0; k<M; k++) {
        for(int i=k, j=0; i>=0 && j<N; i--, j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for(int k=1; k<N; k++) {
        for(int i=M-1, j=k; i>=0 && j<N; i--, j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
[12-05-2023 22:51] @ Sanskar Saxena #8168 conding Block SS 10r: 54
[12-05-2023 22:52] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // create an empty 2D array
    int arr[n][n] = {0};
    
    // read the input array
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    
    // print the upper triangle
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i <= j) {
                cout << arr[i][j] << " ";
            }
            else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
[12-05-2023 22:52] @ Sanskar Saxena #8168 conding Block SS 10r: 56
[12-05-2023 22:52] @ Sanskar Saxena #8168 conding Block SS 10r: 55 nhi kia hai
[12-05-2023 22:56] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
[12-05-2023 22:56] @ Sanskar Saxena #8168 conding Block SS 10r: 41
[12-05-2023 22:56] @ Sanskar Saxena #8168 conding Block SS 10r: #include<iostream>
using namespace std;
int main() 
{
	int n,t=0,i;
	cin>>n;
	t=n;
	while(n>0)
	{
		if(n%2==1)
		cout<<n<<endl;
		n--;
	}
	for(i=1;i<=t;i++)
	{
		if(i%2==0)
		cout<<i<<endl;
	}

	return 0;
}
[12-05-2023 22:56] @ Sanskar Saxena #8168 conding Block SS 10r: 42
[12-05-2023 22:57] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e6+5;

int main() {
    vector<bool> is_prime(MAXN, true);
    vector<int> primes;
    for (int i = 2; i < MAXN; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i+i; j < MAXN; j += i) {
                is_prime[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << primes[n-1] << endl;
    }
    return 0;
}
[12-05-2023 22:57] @ Sanskar Saxena #8168 conding Block SS 10r: 43
[12-05-2023 22:57] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j << " ";
        }
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
[12-05-2023 22:58] @ Sanskar Saxena #8168 conding Block SS 10r: 44
[12-05-2023 22:58] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int main() {
  int N;
  cin>>N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - i; j++) {
      cout << "*"<<"	";
    }
    cout <<"	"<<"\n";
  }
  return 0;
}
[12-05-2023 22:58] @ Sanskar Saxena #8168 conding Block SS 10r: 45
[12-05-2023 22:59] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            if(j<i) {
                cout << i << " ";
            } else {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
[12-05-2023 22:59] @ Sanskar Saxena #8168 conding Block SS 10r: 48
[12-05-2023 22:59] @ Sanskar Saxena #8168 conding Block SS 10r: hai yh
[12-05-2023 22:59] @ Sanskar Saxena #8168 conding Block SS 10r: square pattern wla
[12-05-2023 23:00] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) {
        for(int j=1; j<=i; j++) {
            cout <<j*j << " ";
        }
        cout << endl;
    }
    return 0;
}
[12-05-2023 23:00] @ Sanskar Saxena #8168 conding Block SS 10r: 49
[12-05-2023 23:01] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <cctype> // Required for the toupper() and isalpha() functions

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isalpha(ch)) { // Check if the character is an alphabet
        if (islower(ch)) { // Check if the character is already in lower case
            ch = toupper(ch); // Convert the character to upper case
        }
        cout << ch << endl;
    }
    else {
        cout << -1 << endl; // Character is not an alphabet, so print -1
    }
    return 0;
}
[12-05-2023 23:01] @ Sanskar Saxena #8168 conding Block SS 10r: 50
[12-05-2023 23:02] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;

        // binary search for the largest integer x such that x^k <= n
        long long left = 1, right = n, x = 0;
        while (left <= right) {
            long long mid = (left + right) / 2;
            if (pow(mid, k) <= n) {
                x = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        cout << x << endl;
    }
    
    return 0;
}
[12-05-2023 23:02] @ Sanskar Saxena #8168 conding Block SS 10r: 31
[12-05-2023 23:02] @ Sanskar Saxena #8168 conding Block SS 10r: kth root wla
[12-05-2023 23:03] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int countDigit(int n, int digit) {
    
    if (n == 0) {
        return 0;
    }

    
    int count = countDigit(n / 10, digit);

    
    if (n % 10 == digit) {
        count++;
    }

    return count;
}

int main() {
    int n, digit;
    cin >> n >> digit;
    int count = countDigit(n, digit);
    cout << count << endl;
    return 0;
}
[12-05-2023 23:03] @ Sanskar Saxena #8168 conding Block SS 10r: 32
[12-05-2023 23:04] @ Sanskar Saxena #8168 conding Block SS 10r: #include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while(n > 0) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    while(q--) {
        int a, b;
        cin >> a >> b;
        int count = 0;
        for(int i=a; i<=b; i++) {
            count += countSetBits(i);
        }
        cout << count << endl;
    }
    return 0;
}
[12-05-2023 23:04] @ Sanskar Saxena #8168 conding Block SS 10r: 33
[12-05-2023 23:04] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

bool isArraySorted(int arr[], int n) {
    // Base case: if the array has only one element, it is sorted
    if (n == 1) {
        return true;
    }

    // Check if the first element is greater than the last element
    if (arr[0] > arr[n-1]) {
        return false;
    }

    // Recursively check if the subarray from index 1 to n-1 is sorted
    return isArraySorted(arr+1, n-1);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isArraySorted(arr, n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
[12-05-2023 23:04] @ Sanskar Saxena #8168 conding Block SS 10r: 34
[12-05-2023 23:05] @ Sanskar Saxena #8168 conding Block SS 10r: #include <bits/stdc++.h>
using namespace std;

void permute(string str, int l, int r, set<string> &ans) {
    if (l == r) {
        ans.insert(str);
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            permute(str, l+1, r, ans);
            swap(str[l], str[i]);
        }
    }
}

int main() {
    string str;
    cin >> str;
    set<string> ans;
    permute(str, 0, str.length()-1, ans);
    for (auto x: ans) {
        if (x < str) {
            cout << x << endl;
        }
    }
    return 0;
}
[12-05-2023 23:05] @ Sanskar Saxena #8168 conding Block SS 10r: 36
[12-05-2023 23:07] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int kadane(int arr[], int n) {
    int max_sum = INT_MIN, curr_sum = 0;
    for (int i = 0; i < n; i++) {
        curr_sum = max(curr_sum + arr[i], arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

int max_circular_sum(int arr[], int n) {
    int max_linear_sum = kadane(arr, n);
    int total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular_sum = total_sum + kadane(arr, n);
    if (max_circular_sum == 0) {
        return max_linear_sum;
    }
    return max(max_linear_sum, max_circular_sum);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = max_circular_sum(arr, n);
        cout << ans << endl;
    }
    return 0;
}
[12-05-2023 23:07] @ Sanskar Saxena #8168 conding Block SS 10r: 37
[12-05-2023 23:08] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// custom sorting function
bool compare(int a, int b) {
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ba < ab;
}

// function to find the largest number
string largest_number(vector<int>& nums) {
    // sort the array using the custom sorting function
    sort(nums.begin(), nums.end(), compare);
    
    // concatenate the sorted numbers to form the largest possible number
    string largest = "";
    for (int num : nums) {
        largest += to_string(num);
    }
    
    return largest;
}

// main function
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        
        // find the largest number
        string ans = largest_number(nums);
        
        cout << ans << endl;
    }
    
    return 0;
}
[12-05-2023 23:08] @ Sanskar Saxena #8168 conding Block SS 10r: 38
[12-05-2023 23:09] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <string>

using namespace std;

bool isLongPressedName(string name, string typed) {
    int i = 0, j = 0;
    while (i < name.length() && j < typed.length()) {
        if (name[i] == typed[j]) {
            i++;
            j++;
        } else if (j > 0 && typed[j] == typed[j-1]) {
            j++;
        } else {
            return false;
        }
    }
    return i == name.length();
}

int main() {
    string name, typed;
    cin >> name >> typed;
    if (isLongPressedName(name, typed)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
[12-05-2023 23:09] @ Sanskar Saxena #8168 conding Block SS 10r: 39
[12-05-2023 23:09] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    // If the list is empty or has only one element
    if (head == NULL || head->next == NULL)
        return head;
    
    // Add a dummy node to the beginning of the list
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    
    // Initialize pointers
    ListNode* prev = dummy;
    ListNode* curr = head;
    
    while (curr != NULL) {
        bool isDup = false;
        while (curr->next != NULL && curr->val == curr->next->val) {
            isDup = true;
            curr = curr->next;
        }
        if (isDup) {
            prev->next = curr->next;
        } else {
            prev = curr;
        }
        curr = curr->next;
    }
    
    return dummy->next;
}

int main() {
    int n;
    cin >> n;
    
    // Input the elements of the linked list
    ListNode* head = NULL;
    ListNode* tail = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    // Call the deleteDuplicates function
    head = deleteDuplicates(head);
    
    // Output the updated linked list
    if (head == NULL) {
        cout << -1 << endl;
    } else {
        while (head != NULL) {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
    
    return 0;
}
[12-05-2023 23:09] @ Sanskar Saxena #8168 conding Block SS 10r: 40
[12-05-2023 23:10] @ Sanskar Saxena #8168 conding Block SS 10r: #include <bits/stdc++.h>
using namespace std;

int maxXor(int x, int y) {
    int res = x ^ y;
    int msb = 0;
    while (res) {
        msb++;
        res >>= 1;
    }
    return (1 << msb) - 1;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << maxXor(x, y) << endl;
    return 0;
}
[12-05-2023 23:10] @ Sanskar Saxena #8168 conding Block SS 10r: 35
[12-05-2023 23:10] @ Sanskar Saxena #8168 conding Block SS 10r: bhai 39 bheja toh
[12-05-2023 23:10] @ Sanskar Saxena #8168 conding Block SS 10r: yh
[12-05-2023 23:11] @ Sanskar Saxena #8168 conding Block SS 10r: 35 bheja hai kro
[12-05-2023 23:12] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    cout << largest << endl;
    return 0;
}
[12-05-2023 23:12] @ Sanskar Saxena #8168 conding Block SS 10r: 21
[12-05-2023 23:12] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cin >> n;
    
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    
    cout << rev << endl;
    return 0;
}
[12-05-2023 23:12] @ Sanskar Saxena #8168 conding Block SS 10r: 22
[12-05-2023 23:13] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int decimal = 0;
    int power = 0;
    while (n > 0) {
        int digit = n % 10;
        decimal += digit * pow(2, power);
        n /= 10;
        power++;
    }
    cout << decimal << endl;
    return 0;
}
[12-05-2023 23:13] @ Sanskar Saxena #8168 conding Block SS 10r: 23
[12-05-2023 23:13] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    int n = 1;
    while (count < n1) {
        int term = 3 * n + 2;
        if (term % n2 != 0) {
            cout << term << endl;
            count++;
        }
        n++;
    }
    return 0;
}
[12-05-2023 23:13] @ Sanskar Saxena #8168 conding Block SS 10r: 24
[12-05-2023 23:14] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int octal = 0;
    int power = 1;
    while (n > 0) {
        int digit = n % 8;
        octal += digit * power;
        n /= 8;
        power *= 10;
    }
    cout << octal << endl;
    return 0;
}
[12-05-2023 23:14] @ Sanskar Saxena #8168 conding Block SS 10r: 25
[12-05-2023 23:14] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;
int main() {
    int a, b, n;
    cin >> a >> b >> n;
    for (int f = a; f <= b; f += n) {
        int c = (5 * (f - 32)) / 9;
        cout << f << " " << c << endl;
    }
    return 0;
}
[12-05-2023 23:14] @ Sanskar Saxena #8168 conding Block SS 10r: 26
[12-05-2023 23:15] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;
int sumEven(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}


int sumOdd(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        
        if (sumEven(num) % 4 == 0 || sumOdd(num) % 3 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
[12-05-2023 23:15] @ Sanskar Saxena #8168 conding Block SS 10r: 28
[12-05-2023 23:15] @ Sanskar Saxena #8168 conding Block SS 10r: #include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    if (isPrime(n)) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}
[12-05-2023 23:15] @ Sanskar Saxena #8168 conding Block SS 10r: 29
[12-05-2023 23:15] @ Sanskar Saxena #8168 conding Block SS 10r: 27 aur 30 nhi kia