///////3rd


#include <bits/stdc++.h> 
// Write your code here.
    
long long int sumOrProduct(long long int n,long long int q)
{
	long long int ans = 0;
    
	long long int mod = 1e9 + 7;

	if (q == 1)
	{
		
		ans = (n * (n + 1)) / 2 ;
	}
	else
	{
		ans = 1 ;
		for (long long int i = 1 ; i <= n ; i++)
		{	
	
			i %= mod, ans %= mod ;
			ans = (((ans * i) % mod) + mod) % mod ;
		}
	}

	return ans;

}

///////////////1st////////

// Following is the Binary Tree node structure
/******
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode() {
    	if(left) 
       		delete left;
    	if(right) 
       		delete right;
    }
};
*****/

BinaryTreeNode<int>* findLCA(BinaryTreeNode<int>* root,int data1,int data2,int data3){
	/*Write your code here. 
	*Don't write main().
	*Don't take input, it is passed as function argument.
	*Don't print output.
	*Taking input and printing output is handled automatically.
    
	*/ 
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==data1||root->data==data2||root->data==data3)
    {
        return root;
    }
     BinaryTreeNode<int>*left=findLCA(root->left,data1,data2,data3);
    BinaryTreeNode<int>*right=findLCA(root->right,data1,data2,data3);
    
    if(left!=NULL && right!=NULL)
    {
        return root;
    }
    else if(left!=NULL)
    {
        return left;
    }
    else
    {
        return right;
    }
}