/*
 Reverse Stack Using Recursion
 Sample Input 1 :
3
2 1 3
Sample Output 1 :
3 1 2
Explanation to Sample Input 1 :
Reverse of a give stack is 3 1 2 where first element becomes last and last becomes first.                   
Sample Input 2 :
2
3 2
Sample Output 2 :
2 3
Constraints :
0 <= N <= 10^3
Where 'N' is the number of elements in the given stack.

Time Limit: 1 sec
*/

void insertAtBottom(stack<int> &s, int element) {
    //basecase
    if(s.empty()) {
        s.push(element);
      	return ;
    }
    
    int num = s.top();
    s.pop();
    
    //recursive call
    insertAtBottom(s, element);
    
    s.push(num);
}

void reverseStack(stack<int> &stack) {
  	//base case
    if(stack.empty()) {
        return ;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call
    reverseStack(stack);
    
    insertAtBottom(stack,num);
}