#include<stdio.h>

void st();           //function declaration
void sp();           //function declaration

int main()
{
	int a,b,c,d,e;
	
	printf("\nNOTE :: 1) The Program should be executed under Teacher, Parents or Guardians Guidance.\n");
	printf("\t2) To use the Program a local Stylus, Spen, Apple Pencil or a Touch Pad is needed.\n");
	printf("\t3) Compatible with all Touch screen Devices.\n");
	printf("\t4) Trace the following Alphabets.\n\n");
	
	for(a=1;a<=168;a++)       //This loop is for a LINE 
	{
		printf("_");
	}
	printf("\n");
	
	for(a=1;a<=6;a++)
	{
	    printf("\t\t\t\t");
		for(b=1;b<=11;b++)        //This inner loop for heading alphabet == A 
		{
			if((a==1 && (b==6)) 
			|| (a==2 && (b==5||b==7))
			|| (a==3 && (b==4||b==8)) 
			|| (a==4 && (b>2&&b<10))
			|| (a==5 && (b==2||b==10))
			|| (a==6 && (b==1||b==11)))
			st ();
		    else
		    sp ();
		}
		printf("\t\t\t");
		for(c=1;c<=11;c++)        //This inner loop for heading alphabet == T
	    {
	        if((a==1) || (c==6))
	        st ();
		    else
		    sp ();
	    }
	    printf(" ");
	    for(d=1;d<=11;d++)        //This inner loop for heading alphabet == O
	    {
	        if((a==1&&(d>2&&d<10))
			|| (d==1&&(a>1&&a<6))
			|| (a==6&&(d>2&&d<10))
			|| (d==11&&(a>1&&a<6)))
	        st ();
		    else
		    sp ();
	    }
	    printf("\t\t\t\t");
	    for(e=1;e<=11;e++)        //This inner loop for heading alphabet == Z
	    {
	        if((a==1||a==6) 
			|| (a==2&&e==9) 
			|| (a==3&&e==7) 
			|| (a==4&&e==5)
			|| (a==5&&e==3)
			|| (a==6&&e==1))
	        st ();
		    else
		    sp ();
	    }
	    printf("\n");
	}
	for(a=1;a<=42;a++)       //This loop is for a LINE 
	{
		printf("_  _");
	}
	printf("\n\n");
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=9;b++)         //This inner loop is for alphabet == A 
		{
			if((a==1 && (b==5)) 
			|| (a==2 && (b==4||b==6))
			|| (a==3 && (b>2&&b<8))
			|| (a==4 && (b==2||b==8))
			|| (a==5 && (b==1||b==9)))
			st ();
		    else
		    sp ();	
		}
		printf("\t");
		for(c=1;c<=9;c++)          //This inner loop is for alphabet == B
		{
		    if((a==1&&(c<9))
			|| (a==2&&(c==1||c==9)) 
			|| (a==3&&(c<9)) 
			|| (a==4&&(c==1||c==9))
			|| (a==5&&(c<9)))
			st ();
		    else
		    sp (); 
		}
		printf("\t");
		for(d=1;d<=9;d++)         //This inner loop is for alphabet == C
		{
		    if((a==1&&(d>1))
			|| (d==1&&(a>1&&a<5))
			|| (a==5&&(d>1)))
			st ();
		    else
		    sp ();  
		}
		printf("\t");
		for(e=1;e<=9;e++)         //This inner loop is for alphabet == D
		{
			if((a==1&&(e<9))
			||(e==1)
			||(a==5&&(e<9))
			||(e==9&&(a>1&&a<5)))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(b=1;b<=9;b++)         //This inner loop is for alphabet == E
		{
			if((b==1)
			||(a==1)
			||(a==3&&(b<8))
			||(a==5))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(c=1;c<=9;c++)         //This inner loop is for alphabet == F
		{
			if((c==1)||(a==1)||(a==3&&(c<8)))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(d=1;d<=9;d++)         //This inner loop is for alphabet == G
		{
			if((a==1&&(d>1))
			||(d==1&&(a>1&&a<5))
			||(a==3&&(d>5))
			||(a==5&&(d>1&&d<9))
			||(d==9&&(a>2&&a<5)))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(e=1;e<=9;e++)           //This inner loop is for alphabet == H
		{
			if((e==1)||(e==9)||(a==3))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(b=1;b<=9;b++)           //This inner loop is for alphsbet == I
		{
			if((a==1)||(a==5)||(b==5))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(c=1;c<=9;c++)           //This inner loop is for alphabet == J
		{
			if((a==1&&(c>1&&c<9))
			||(c==5&&a<5)
			||(a==5&&(c>1&&c<5))
			||(a==4&&c==1))
			st ();
		    else
		    sp ();
		}		
		printf("\n");
    }
    printf("\n\n");
	for(a=1;a<=5;a++)        
	{
		for(b=1;b<=9;b++)           //This inner loop is for alphabet == K
		{
			if((b==3)
			||(b==5&&(a==2||a==4))
			||(b==7&&(a==1||a==5)))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(c=1;c<=9;c++)           //This inner loop is for alphabet == L
		{
			if((c==1)||(a==5&&(c<8)))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(d=1;d<=9;d++)           //This inner loop is for alphabet == M
		{
			if((d==1||d==9)
			||(a==2&&(d==3||d==7))
			||(a==3&&d==5))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(e=1;e<=9;e++)           //This inner loop is for alphabet == N
		{
			if((e==1||e==9)
			||(a==2&&e==3)
			||(a==3&&e==5)
			||(a==4&&e==7))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(b=1;b<=9;b++)          //This inner loop is for alphabet == O
		{
			if((a==1&&(b>2&&b<8))
			|| (b==1&&(a>1&&a<5))
			|| (a==5&&(b>2&&b<8))
			|| (b==9&&(a>1&&a<5)))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(c=1;c<=9;c++)          //This inner loop is for alphabet == P
		{
			if((c==1)
			||(a==1&&c<8)
			||(a==2&&c==8)
			||(a==3&&c<8))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(d=1;d<=9;d++)          //This inner loop is for alphabet == Q
		{
			if((a==1&&(d>2&&d<7))
			|| (d==1&&(a>1&&a<4))
			|| (a==4&&(d>2&&d<7))
			|| (d==8&&(a>1&&a<4))
			|| (a==3&&d==6)
			|| (a==4&&d==7)
			|| (a==5&&d==8))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(e=1;e<=9;e++)            //This inner loop is for alphabet == R
		{
			if((e==2)
			||(a==1&&(e>2&&e<7))
			||(a==2&&e==7)
			||(a==3&&(e>2&&e<7))
			||(a==4&&e==4)
			||(a==5&&e==6))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(b=1;b<=9;b++)             //This inner loop is for alphabet == S
		{
			if((a==1&&(b>3&&b<8))
			||(a==2&&b==3)
			||(a==3&&b==5)
			||(a==4&&b==7)
			||(a==5&&(b>2&&b<7)))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(c=1;c<=9;c++)              //This inner loop is for alphabet == T
		{
			if(a==1||c==5)
			st ();
		    else
		    sp ();
		}
		printf("\n");	
    }
    printf("\n\n");
    for(a=1;a<=5;a++)
    {
		for(d=1;d<=9;d++)               //This inner loop is for alphabet == U
		{
			if((d==2&&a<5)
			||(a==5&&(d>3&&d<7))
			||(d==8&&a<5))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(b=1;b<=9;b++)              //This inner loop is for alphabet == V
		{
			if((a==1&&(b==1||b==9))
			||(a==2&&(b==2||b==8))
			||(a==3&&(b==3||b==7))
			||(a==4&&(b==4||b==6))
			||(a==5&&b==5))
			st ();
		    else
		    sp ();
		}
		printf("\t");
		for(c=1;c<=9;c++)              //This inner loop is for alphabet == W
		{
			if((c==1||c==9)
			||(a==3&&c==5)
			||(a==4&&(c==3||c==7)))
			st ();
		    else
		    sp ();
	    }
	    printf("\t");
		for(d=1;d<=9;d++)              //This inner loop is for alphabet == X
		{
			if((a==1&&(d==1||d==9))
			||(a==2&&(d==3||d==7))
			||(a==3&&d==5)
			||(a==4&&(d==3||d==7))
			||(a==5&&(d==1||d==9)))
			st ();
		    else
		    sp ();
	    }
	    printf("\t");
		for(e=1;e<=9;e++)              //This inner loop is for alphabet == Y
		{
			if((a==1&&(e==1||e==9))
			||(a==2&&(e==3||e==7))
			||(a==3&&e==5)
			||(a==4&&e==3)
			||(a==5&&e==1))
			st ();
		    else
		    sp ();
	    }
	    printf("\t");
		for(b=1;b<=9;b++)              //This inner loop is for alphabet == Z
		{
			if((a==1||a==5) 
			|| (a==2&&b==7) 
			|| (a==3&&b==5) 
			|| (a==4&&b==3)
			|| (a==5&&b==1))
	        st ();
		    else
		    sp ();
	    }
		printf("\n");
	}	
	return 0;
}void st()
{
	{
	    printf("*");
	}
}
void sp()
{
	{
	    printf(" ");
	}
}
