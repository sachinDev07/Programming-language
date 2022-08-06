#include<conio.h>
#include<stdio.h>
#include<iostream>
 using namespace std;

class BST
{
	private:
	struct node
	{
		node* left;
		int item;
		node* right;
	};
	node* root;
	protected:
		void inorderT(node* ptr);
		void preorderT(node* ptr);
		void postorderT(node *ptr);
	public:
		BST(){root = NULL;}
		void insert(int data);
		void inorder();
		void preorder();
		void postorder();
		void deletion(int value);
};

void BST::postorderT(node *ptr)
{
	if(ptr)
	{
		postorderT(ptr->left);
		postorderT(ptr->right);
		cout<<" "<<ptr->item;
	}
}

void BST::postorder()
{
	postorderT(root);
}

void BST::preorderT(node* ptr)
{
	if(ptr)
	{
		cout<<" "<<ptr->item;
		preorderT(ptr->left);
		preorderT(ptr->right);
	}
}

void BST::preorder()
{
	preorderT(root);
}

void BST::inorderT(node* ptr)
{
	if(ptr)
	{
		inorderT(ptr->left);
		cout<<" "<<ptr->item;
		inorderT(ptr->right);	
	}
}

void BST::inorder()
{
	inorderT(root);
}

void BST::insert(int data)
{
	node *n=new node;
	n->left=NULL;
	n->item = data;
	n->right=NULL;
	node *ptr;
	
	if(root==NULL)
		root=n;
	else
	{
		ptr=root;
		while(true)
		{
			if(data==root->item)
			{
				delete n;
				break;
			}
			else if(data<ptr->item)
			{
				if(ptr->left==NULL)
				{
					ptr->left=n;
					break;
				}
				else
					ptr=ptr->left;
			}
			else
			{
				if(ptr->right==NULL)
				{
					ptr->right=n;
					break;
				}
				else
					ptr=ptr->right;
		
			}
		}
	}
	
}

void BST::deletion(int value)
{
	node *ptr,*parptr,*suc,*parsuc;
	parptr = NULL;
	ptr=root;
	
	while(ptr)
	{
		if(ptr->item==value)
			break;
		else if(value < ptr->item)
		{
			parptr=ptr;
			ptr=ptr->left;
		}
		else
		{
			parptr=ptr;
			ptr=ptr->right;
		}
	}
	
	if(ptr!=NULL && parptr==NULL)
	{
		//del the root node
		if(ptr->left==NULL && ptr->right==NULL)
		{
			// 0 child
			root = NULL;
			delete ptr;
		}
		else if(ptr->left==NULL || ptr->right==NULL)
		{
			if(ptr->left!=NULL)
				root = ptr->left;
			else
				root=ptr->right;
			delete ptr;
		}
		else
		{
			// 2 childre
			parsuc=ptr;
			suc=ptr->right;
				while(suc->left)
				{
					parsuc=suc;
					suc=suc->left;
				}
				ptr->item=suc->item;
				if(suc->right==NULL)
				{
					// 0 child
					if(parsuc->left==suc)
						parsuc->left=NULL;
					else
						parsuc->right=NULL;
					delete suc;
				}
				else
				{
					//1 child
					if(parsuc->left==suc)
						parsuc->left=suc->right;
					else
						parsuc->right=suc->right;
					delete suc;
				}
		}
	}
	else if(ptr!=NULL)
	{
		if(ptr->left==NULL&&ptr->right==NULL)
		{
			// 0 child 
			if(parptr->left==ptr)
				parptr->left=NULL;
			else
				parptr->right=NULL;
			delete ptr;
		}
		else if(ptr->left==NULL || ptr->right==NULL)
		{
			// 1 child
			if(parptr->left==ptr)
			{
				if(ptr->left!=NULL)
					parptr->left=ptr->left;
				else
					parptr->left=ptr->right;
			}
		}
		else
		{
			if(ptr->left!=NULL)
				parptr->right=ptr->left;
			else
			{
				//2 children
				suc=ptr->right;
				parsuc=ptr;
				while(suc->left)
				{
					parsuc=suc;
					suc = suc->left;
				}
				ptr->item=suc->item;
				//delete suc
				if(suc->right==NULL)
				{
					// 0 child
					if(parsuc->left==suc)
						parsuc->left=NULL;
					else
						parsuc->right=NULL;
					delete suc;
				}
				else
				{
					// 1 child
					if(parsuc->left==suc)
						parsuc->left=suc->right;
					else
						parsuc->right=suc->right;
					delete suc;
				}
			}
		}
	}
	
}


int main()
{
	BST tree;
	tree.insert(20);
	tree.deletion(30);
	tree.inorder();
//	tree.insert(60);
//	tree.insert(50);
//	tree.insert(90);
//	tree.insert(65);
//	tree.insert(70);
//	tree.insert(30);
//	tree.inorder();
//	cout<<endl;
//	tree.preorder();
//	cout<<endl;
//	tree.postorder();
//	tree.deletion(70);
//	cout<<endl;
//	tree.inorder();
//	cout<<endl;
//	tree.preorder();
//	cout<<endl;
//	tree.postorder();
//	tree.deletion(300);
//	cout<<endl;
//	tree.inorder();
}