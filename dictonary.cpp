#include <iostream>
#include<stdio.h>
using namespace std;
#include<string.h>
#include<windows.h>

 void gotoxy(short x, short y) 
 {
 COORD pos = {x, y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
 }
FILE *fp;
struct data
{
	int letter;
	char word[20];
	char meaning[100];
}dat;
struct dictonary
{
	data dat;
	dictonary *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m;
	dictonary *n,*o,*p,*q,*r,*s,*t,*u,*v,*w,*x,*y,*z;
}plo;
int j=0;
dictonary* newnode(int c)
{
	dictonary* node=new dictonary;
	node->a=node->b=node->c=node->d=node->e=node->f=NULL;
	node->g=node->h=node->i=node->j=node->k=node->l=NULL;
	node->m=node->n=node->o=node->p=node->q=node->r=NULL;
	node->s=node->t=node->u=node->v=node->w=node->x=NULL;
	node->y=node->z=NULL;
	strcpy(node->dat.word,"!@#$");
	node->dat.letter=c;
	return node;
}
int i=-1;
dictonary* Insert(dictonary *root,char word[],char meaning[])
{
	i++;
	if(i==strlen(word))
	{
		if(strcmp(word,root->dat.word)==0)
		{
			cout<<"                     Word Already Exist"<<endl;
		}
		else
		{
		strcpy(root->dat.word,word);
		strcpy(root->dat.meaning,meaning);
		}
	}
	else
	{
	switch(word[i])
	{
		case 'a':
			case 'A':
			if(root->a==NULL)
			{
				root->a=newnode(1);
				root->a=Insert(root->a,word,meaning);
			}
			else
			{
				root->a=Insert(root->a,word,meaning);
			}
			break;
		case 'b':
			case 'B':
					if(root->b==NULL)
			{
				root->b=newnode(2);
				root->b=Insert(root->b,word,meaning);
			}
			else
			{
				root->b=Insert(root->b,word,meaning);
			}
			break;
		case 'c':
			case 'C':
				if(root->c==NULL)
			{
				
				root->c=newnode(3);
				root->c=Insert(root->c,word,meaning);
			}
			else
			{
				root->c=Insert(root->c,word,meaning);
			}
			break;
		case 'd':
			case 'D':
				if(root->d==NULL)
			{
				root->d=newnode(4);
				root->d=Insert(root->d,word,meaning);
			}
			else
			{
				root->d=Insert(root->d,word,meaning);
			}
			break;
		case 'e':
			case 'E':
			if(root->e==NULL)
			{
				root->e=newnode(5);
				root->e=Insert(root->e,word,meaning);
			}
			else
			{
				root->e=Insert(root->e,word,meaning);
			}
			break;
		case 'f':
			case 'F':
					if(root->f==NULL)
			{
				root->f=newnode(6);
				root->f=Insert(root->f,word,meaning);
			}
			else
			{
				root->f=Insert(root->f,word,meaning);
			}
			break;
		case 'g':
			case 'G':
				if(root->g==NULL)
			{
				root->g=newnode(7);
				root->g=Insert(root->g,word,meaning);
			}
			else
			{
				root->g=Insert(root->g,word,meaning);
			}
			break;
		case 'h':
			case 'H':
				if(root->h==NULL)
			{
				root->h=newnode(8);
				root->h=Insert(root->h,word,meaning);
			}
			else
			{
				root->h=Insert(root->h,word,meaning);
			}
			break;
		case 'i':
			case 'I':
			if(root->i==NULL)
			{
				root->i=newnode(9);
				root->i=Insert(root->i,word,meaning);
			}
			else
			{
				root->i=Insert(root->i,word,meaning);
			}
			break;
		case 'j':
			case 'J':
					if(root->j==NULL)
			{
				root->j=newnode(10);
				root->j=Insert(root->j,word,meaning);
			}
			else
			{
				root->j=Insert(root->j,word,meaning);
			}
			break;
		case 'k':
			case 'K':
				if(root->k==NULL)
			{
				root->k=newnode(11);
				root->k=Insert(root->k,word,meaning);
			}
			else
			{
				root->k=Insert(root->k,word,meaning);
			}
			break;
		case 'l':
			case 'L':
				if(root->l==NULL)
			{
				root->l=newnode(12);
				root->l=Insert(root->l,word,meaning);
			}
			else
			{
				root->l=Insert(root->l,word,meaning);
			}
			break;
		case 'm':
			case 'M':
			if(root->m==NULL)
			{
				root->m=newnode(13);
				root->m=Insert(root->m,word,meaning);
			}
			else
			{
				root->m=Insert(root->m,word,meaning);
			}
			break;
		case 'n':
			case 'N':
					if(root->n==NULL)
			{
				root->n=newnode(14);
				root->n=Insert(root->n,word,meaning);
			}
			else
			{
				root->n=Insert(root->n,word,meaning);
			}
			break;
		case 'o':
			case 'O':
				if(root->o==NULL)
			{
				root->o=newnode(15);
				root->o=Insert(root->o,word,meaning);
			}
			else
			{
				root->o=Insert(root->o,word,meaning);
			}
			break;
		case 'p':
			case 'P':
				if(root->p==NULL)
			{
				root->p=newnode(16);
				root->p=Insert(root->p,word,meaning);
			}
			else
			{
				root->p=Insert(root->p,word,meaning);
			}
			break;
		case 'q':
			case 'Q':
			if(root->q==NULL)
			{
				root->q=newnode(16);
				root->q=Insert(root->q,word,meaning);
			}
			else
			{
				root->q=Insert(root->q,word,meaning);
			}
			break;
		case 'r':
			case 'R':
					if(root->r==NULL)
			{
				root->r=newnode(17);
				root->r=Insert(root->r,word,meaning);
			}
			else
			{
				root->r=Insert(root->r,word,meaning);
			}
			break;
		case 's':
			case 'S':
				if(root->s==NULL)
			{
				root->s=newnode(18);
				root->s=Insert(root->s,word,meaning);
			}
			else
			{
				root->s=Insert(root->s,word,meaning);
			}
			break;
		case 't':
			case 'T':
				if(root->t==NULL)
			{
				root->t=newnode(19);
				root->t=Insert(root->t,word,meaning);
			}
			else
			{
				root->t=Insert(root->t,word,meaning);
			}
			break;
		case 'u':
			case 'U':
			if(root->u==NULL)
			{
				root->u=newnode(20);
				root->u=Insert(root->u,word,meaning);
			}
			else
			{
				root->u=Insert(root->u,word,meaning);
			}
			break;
		case 'v':
			case 'V':
					if(root->v==NULL)
			{
				root->v=newnode(21);
				root->v=Insert(root->v,word,meaning);
			}
			else
			{
				root->v=Insert(root->v,word,meaning);
			}
			break;
		case 'w':
			case 'W':
				if(root->w==NULL)
			{
				root->w=newnode(22);
				root->w=Insert(root->w,word,meaning);
			}
			else
				root->w=Insert(root->w,word,meaning);
			break;
		case 'x':
			case 'X':
				if(root->x==NULL)
			{
				root->x=newnode(24);
				root->x=Insert(root->x,word,meaning);
			}
			else
			{
				root->x=Insert(root->x,word,meaning);
			}
			break;
		case 'y':
			case 'Y':
			if(root->y==NULL)
			{
				root->y=newnode(25);
				root->y=Insert(root->y,word,meaning);
			}
			else
			{
				root->y=Insert(root->y,word,meaning);
			}
			break;
		case 'z':
			case 'Z':
					if(root->z==NULL)
			{
				root->z=newnode(26);
				root->z=Insert(root->z,word,meaning);
			}
			else
			{
				root->z=Insert(root->z,word,meaning);
			}
			break;
		default:
			return root;
	}
	}
	return root;
}
void display(dictonary *root)
{
	static int t=10,r=3,f=3,d=30;
	j=0;
	if(root==NULL)
	{
	return;
	}
	if(0!=strcmp(root->dat.word,"!@#$"))
	{
		r+=2;
		f+=2;
		gotoxy(t,r);
		cout<<root->dat.word;
		gotoxy(d,f);
		cout<<root->dat.meaning;
		j++;
	}
	display(root->a);
	display(root->b);
	display(root->c);
	display(root->d);
	display(root->e);
	display(root->f);
	display(root->g);
	display(root->h);
	display(root->i);
	display(root->j);
	display(root->k);
	display(root->l);
	display(root->m);
	display(root->n);
	display(root->o);
	display(root->p);
	display(root->q);
	display(root->r);
	display(root->s);
	display(root->t);
	display(root->u);
	display(root->v);
	display(root->w);
	display(root->x);
	display(root->y);
	display(root->z);
	//if(j==0)
	//cout<<"Empty Dictonary";	
}

void write(dictonary *root)
{
	j=0;
	//cout<<"789";
	if(root==NULL)
	{
	return;
	}
	if(0!=strcmp(root->dat.word,"!@#$"))
	{
		fprintf(fp,"%s\n%s\n",root->dat.word,root->dat.meaning);
		j++;
	}
	write(root->a);
	write(root->b);
	write(root->c);
	write(root->d);
	write(root->e);
	write(root->f);
	write(root->g);
	write(root->h);
	write(root->i);
	write(root->j);
	write(root->k);
	write(root->l);
	write(root->m);
	write(root->n);
	write(root->o);
	write(root->p);
	write(root->q);
	write(root->r);
	write(root->s);
	write(root->t);
	write(root->u);
	write(root->v);
	write(root->w);
	write(root->x);
	write(root->y);
	write(root->z);
	//if(j==0)
	//cout<<"Empty Dictonary";	
}

void search(char name[],dictonary *root)
{
	i++;
	if(i==strlen(name))
	{
		 if(root==NULL)
		{
		cout<<"\n                        Word Not Found";
		return;
		}
		else if(0!=strcmp(root->dat.word,"!@#$"))
		{
		cout<<endl<<"\t"<<root->dat.word<<"::";
		cout<<root->dat.meaning<<endl;
		}
		else
		{
			cout<<"4";
			cout<<"\n                        Word Not Found";
		}
	}
	else if(root==NULL)
	{
		cout<<"\n                        Word Not Found";
		return;
	}
	else
	{
	switch(name[i])
	{
		case 'a':
			case 'A':
			search(name,root->a);
			break;
		case 'b':
			case 'B':
			search(name,root->b);
			break;
		case 'c':
			case 'C':
			search(name,root->c);
			break;
		case 'd':
			case 'D':
			search(name,root->d);
			break;
		case 'e':
			case 'E':
			search(name,root->e);
			break;
		case 'f':
			case 'F':
			search(name,root->f);
			break;
		case 'g':
			case 'G':
			search(name,root->g);
			break;
		case 'h':
			case 'H':
			search(name,root->h);
			break;
		case 'i':
			case 'I':
			search(name,root->i);
			break;
		case 'j':
			case 'J':
			search(name,root->j);
			break;
		case 'k':
			case 'K':
			search(name,root->k);
			break;
		case 'l':
			case 'L':
			search(name,root->l);
			break;
		case 'm':
			case 'M':
			search(name,root->m);
			break;
		case 'n':
			case 'N':
			search(name,root->n);
			break;
		case 'o':
			case 'O':
			search(name,root->o);
			break;
		case 'p':
			case 'P':
			search(name,root->p);
			break;
		case 'q':
			case 'Q':
			search(name,root->q);
			break;
		case 'r':
			case 'R':
			search(name,root->r);
			break;
		case 's':
			case 'S':
			search(name,root->s);
			break;
		case 't':
			case 'T':
			search(name,root->t);
			break;			
		case 'u':
			case 'U':
			search(name,root->u);
			break;
		case 'v':
			case 'V':
			search(name,root->v);
			break;
		case 'w':
			case 'W':
			search(name,root->w);
			break;
		case 'x':
			case 'X':
			search(name,root->x);
			break;
		case 'y':
			case 'Y':
			search(name,root->y);
			break;	
		case 'z':
			case 'Z':
			search(name,root->z);
			break;
		default:
			return;	
		}
			
	}
}
void delty(char name[],dictonary *root)
{
	char z;
	i++;
	if(i==strlen(name))
	{
		if(root==NULL)
		{
		cout<<"\n                   Word Not Found";
		return;
		}
		else if(0!=strcmp(root->dat.word,"!@#$"))
		{
		cout<<endl<<"\t"<<root->dat.word<<"::";
		cout<<root->dat.meaning<<endl;
		cout<<"\n\tAre You sure You want to delete\n";
		cin>>z;
		if(z=='y')
		{
			strcpy(root->dat.word,"!@#$");
		}
		}
		else
		{
		cout<<"\n                   Word Not Found";
		}
	}
	else if(root==NULL)
	{
		cout<<"\n                   Word Not Found";
		return;
	}
	else
	{
	switch(name[i])
	{
		case 'a':
			case 'A':
			delty(name,root->a);
			break;
		case 'b':
			case 'B':
			delty(name,root->b);
			break;
		case 'c':
			case 'C':
			delty(name,root->c);
			break;
		case 'd':
			case 'D':
			delty(name,root->d);
			break;
		case 'e':
			case 'E':
			delty(name,root->e);
			break;
		case 'f':
			case 'F':
			delty(name,root->f);
			break;
		case 'g':
			case 'G':
			delty(name,root->g);
			break;
		case 'h':
			case 'H':
			delty(name,root->h);
			break;
		case 'i':
			case 'I':
			delty(name,root->i);
			break;
		case 'j':
			case 'J':
			delty(name,root->j);
			break;
		case 'k':
			case 'K':
			delty(name,root->k);
			break;
		case 'l':
			case 'L':
			delty(name,root->l);
			break;
		case 'm':
			case 'M':
			delty(name,root->m);
			break;
		case 'n':
			case 'N':
			delty(name,root->n);
			break;
		case 'o':
			case 'O':
			delty(name,root->o);
			break;
		case 'p':
			case 'P':
			delty(name,root->p);
			break;
		case 'q':
			case 'Q':
			delty(name,root->q);
			break;
		case 'r':
			case 'R':
			delty(name,root->r);
			break;
		case 's':
			case 'S':
			delty(name,root->s);
			break;
		case 't':
			case 'T':
			delty(name,root->t);
			break;			
		case 'u':
			case 'U':
			delty(name,root->u);
			break;
		case 'v':
			case 'V':
			delty(name,root->v);
			break;
		case 'w':
			case 'W':
			delty(name,root->w);
			break;
		case 'x':
			case 'X':
			delty(name,root->x);
			break;
		case 'y':
			case 'Y':
			delty(name,root->y);
			break;	
		case 'z':
			case 'Z':
			delty(name,root->z);
			break;
		}
	}
}
void menu(dictonary *head)
{
	system("cls");
	int m;
	char word[20];
	char meaning[100];
	char c='y';
	cout<<"******************************Welcome to Dictonary******************************\n\n";
	cout<<"                              Choose Your Option\n\n                              1.Add Words To Dictonary\n                              2.See All Words\n                              3.Search a Word\n                              4.Delete a word\n                              5.Exit\n";
	cin>>m;
	system("cls");
	switch(m)
	{
		case 1:
			c='y';
			while(c=='y')
			{
				i=-1;	
			cout<<"\n                        Enter Word::";
			cin>>word;
			fflush(stdin);
			cout<<"\n                        Meaning::";
			gets(meaning);
			head=Insert(head,word,meaning);
			cout<<"\n\n                        Want To Continue y/n  ";
			cin>>c;
			}
			menu(head);	
			break;
		case 2:
			cout<<"                         Type 1 to see all words\n\n          Type any letter to see the word starting with that letter\n";
			cin>>c;
			system("cls");
			gotoxy(10,2);
			cout<<"Word";
			gotoxy(30,2);
			cout<<"Meaning\n\n";
			switch(c)
			{
				case '1':
					display(head);
					break;
			case 'a':
				case 'A':
				display(head->a);
				break;
			case 'b':
				case 'B':
				display(head->b);
				break;
			case 'c':
				case 'C':
				display(head->c);
				break;
			case 'd':
				case 'D':
				display(head->d);
				break;
			case 'e':
				case 'E':
				display(head->e);
				break;
			case 'f':
				case 'F':
				display(head->f);
				break;
			case 'g':
				case 'G':
				display(head->g);
				break;
			case 'h':
				case 'H':
				display(head->h);
				break;
			case 'i':
				case 'I':
				display(head->i);
				break;
			case 'j':
				case 'J':
				display(head->j);
				break;
			case 'k':
				case 'K':
				display(head->k);
				break;
			case 'l':
				case 'L':
				display(head->l);
				break;
			case 'm':
				case 'M':
				display(head->m);
				break;
			case 'n':
				case 'N':
				display(head->n);
				break;
			case 'o':
				case 'O':
				display(head->o);
				break;
			case 'p':
				case 'P':
				display(head->p);
				break;
			case 'q':
				case 'Q':
				display(head->q);
				break;
			case 'r':
				case 'R':
				display(head->r);
				break;
			case 's':
				case 'S':
				display(head->s);
				break;
			case 't':
				case 'T':
				display(head->t);
				break;			
			case 'u':
				case 'U':
				display(head->u);
				break;
			case 'v':
				case 'V':
				display(head->v);
				break;
			case 'w':
				case 'W':
				display(head->w);
				break;
			case 'x':
				case 'X':
				display(head->x);
				break;
			case 'y':
				case 'Y':
				display(head->y);
				break;	
			case 'z':
				case 'Z':
				display(head->z);
				break;
			default:
				return;	
			}
				cin>>c;
			menu(head);
			break;
		case 3:
			c='y';
			while(c=='y'||c=='Y')
			{
			cout<<"\n                   Type a name to search::";
			cin>>word;
			i=-1;
			search(word,head);
			cout<<"\n\tWant To Continue y/n  ";
			cin>>c;
			}
			menu(head);	
			break;
		case 4:
			c='y';
			while(c=='y'||c=='Y')
			{
			cout<<"                   Type a name to delete::";
			cin>>word;
			i=-1;
			delty(word,head);
			cout<<"\n\tWant To Continue y/n  ";
			cin>>c;
			}
			menu(head);	
			break;
		case 5:
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n                        Thank You Have a Nice Day";
				fp=fopen("G:\\roshan.txt","w+");
				write(head);
				fclose(fp);
				exit(0);	
		default:
			cout<<"     ***********Incorrect Selection**********\n";
				
			
	}
}
int main()
{
	char word[20];
	char meaning[100];
	dictonary *head=newnode(100);
	int f;
	char ch;
	fp=fopen("G:\\roshan.txt","a+");
	if(fp==NULL)
	{
		cout<<"File Founding Error";
	}
	else
	{
		while(1)
     {
     	ch=fgetc(fp);
     	//cout<<ch;
     	if(ch==EOF)
     	break;
     	f=0;
     	while(ch!='\n')
     	{
     		word[f]=ch;
			 f++;
			 ch=fgetc(fp);	
		 }
		 word[f]='\0';
		 f=0;
		 ch=fgetc(fp);
		 while(ch!='\n')
		 {
		 	meaning[f]=ch;
			f++;
			ch=fgetc(fp);
		}
		meaning[f]='\0';
     		i=-1;
     		//cout<<word<<"::"<<meaning<<endl;
    	     head=Insert(head,word,meaning);
  		}
	}
	//cin>>f;
	fclose(fp);
	menu(head);
	return 0;
}
