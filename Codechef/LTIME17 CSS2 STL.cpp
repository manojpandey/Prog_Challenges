#include <iostream>
#include<cmath>
#include<stdlib.h>
#include<vector>
using namespace std;
struct css 
     {
        int id;
        int att;
        vector <int> value;
        vector <int> priority;
	 } ;
 int check(css c[] ,int n , int id , int att);
  int max(vector <int> a , int n);
int main()
 {
   int n,m,j,iD,attr,val,pri,k=0;
   int in_id , in_att;
   cin >> n >> m;
	 css c[n];
	 for(j=0;j<n;j++)
	    c[j] = {0,0};
	 //c = (css*) malloc(sizeof(css)) ; 
	// c[0].id
	  //cout << c[0].id;
	 int i=0;
	 while(i<n)
	   {
	   	   cin >> iD >> attr >> val >> pri ;
	   	   int index = check(c,n,iD,attr);
	   	   c[index].id = iD;
	   	   c[index].att = attr;
	   	   c[index].value.push_back(val);
	   	   c[index].priority.push_back(pri);
	       i++;
	   }
	   int l;
	 for(k=0;k<m;k++)
	   {
	       cin >> in_id >> in_att ; 
	       l = check(c,n,in_id,in_att) ; 
		   cout << c[l].value[max(c[l].priority , c[l].priority.size())] ;      
       }  
	   
   return 0;
 }
 
 int max(vector <int> a , int n)
 {
    int maximum = -100 , i , index;
    for(i=0;i<n;i++)
    {
       if(maximum <= a[i])
         {
           maximum = a[i];
           index = i;
         } 
	}
	return index;
 }
 
 int check(css c[] ,int n , int id , int att)
 {
 	 int i=0,index;
     while(c[i].id!=0 && i<n)
        {
           if(c[i].id == id && c[i].att == att)
             {
               index = i;
               break;
			 }
           i++;
           index = i;
		}
	  return index;	
 }
