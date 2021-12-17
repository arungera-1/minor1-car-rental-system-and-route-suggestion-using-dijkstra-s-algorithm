#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Cars {
	
    string mark [5] = {"Hyundai","TATA","Mahindra","Maruti Suzuki","Toyota"};
    string model [5]= {"Grand i10","Indica","Scorpio","Swift","Innova"};
    string color [5]={"White","Red","Black","Silver","Brown",};
    int price [5] = {16,15,25,18,20} ;
    int advance[5] = {1000,500,2000,1000,1800};
    
};
 
struct UserInfo{
 
   string Name [10];
   string Natio_ID [10] ;
   int payment_advance [10] ;
};
 
//Declaring structs
Cars car ;
UserInfo info ;

int cost[30][30] ={{ 0, 583, 436, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 583, 0, 676, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 436, 676, 0, 248, 223, 355, 900, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 248, 0, 9999, 320, 9999, 560, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 223, 9999, 0, 321, 604, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 355, 320, 321, 0, 672, 360, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 900, 9999, 604, 672, 0, 794, 616, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 654, 809, 715, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 560, 9999, 360, 794, 0, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 736, 783, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 616, 9999, 0, 9999, 416, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 248, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 0, 629, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 416, 629, 0, 110, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 347, 9999, 9999, 463, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 110, 0, 454, 569, 328, 338, 162, 603, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 454, 0, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 569, 9999, 0, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 328, 9999, 9999, 0, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 338, 9999, 9999, 9999, 0, 178, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 162, 9999, 9999, 9999, 178, 0, 229, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 603, 9999, 9999, 9999, 9999, 229, 0, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 736, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 0, 940, 9999, 9999, 848, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 654, 783, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 940, 0, 9999, 498, 623, 9999, 9999, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 809, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 498, 0, 614, 763, 630, 421, 9999, 9999, 891, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 715, 9999, 248, 9999, 347, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 614, 0, 9999, 9999, 409, 9999, 9999, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 848, 623, 763, 9999, 0, 503, 9999, 666, 581, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 631, 9999, 763, 0, 9999, 9999, 583, 339, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 463, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 421, 409, 9999, 9999, 0, 9999, 9999, 1020, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 666, 9999, 9999, 0, 228, 9999, 9999, 9999},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 581, 583, 9999, 228, 0, 524, 672, 692},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 891, 9999, 9999, 339, 1020, 9999, 524, 0, 9999, 677},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 672, 9999, 0, 307},
{ 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 677, 307, 0}};
 
int n = 30  ; 

int getMin(int dist[] , bool visited[]){
    int key = 0 ; 
    int min = INT_MAX ; 
    for(int i=0;i < n ; i++){
        if(!visited[i] && dist[i]<min){
            min = dist[i] ; 
            key = i ; 
        }
    }
    return key ; 
}

int display(int dist[] , int par[],int final ){
	int finalD ;
   for(int i =0 ;i < n ;i++){
   	if(i==final)
	   {
       finalD = dist[i];
       cout<<endl;
	   }
   }  return finalD; 
}


 void path(int dist[] , int par[],int final ){
	for(int i =0 ;i < n ;i++){
   	if(i==final)
	   {
       int temp = par[i] ; 
       cout<<i << " <- " ;
       while(temp!=-1)
       {
           cout<< temp << " <- " ;
           temp = par[temp] ; 
       }
	}
}
}	

void dijkstra(int src, int final ){
    int par[100] , dist[100] ; 
    bool visited[100] ={0} ; 
    fill(dist , dist+n  , INT_MAX ); 

    dist[src] =0 ; 
    par[src] =-1 ;
    
    for(int g = 0  ;g<n-1 ; g++){
        int u = getMin( dist ,  visited )  ; 
        visited[u] = true ;
        for(int v =0 ; v< n ;v++){
            if(!visited[v] && (dist[u]+cost[u][v]) <  dist[v] && cost[u][v]!=9999)
            {
                par[v] = u ; 
                dist[v] = dist[u] + cost[u][v] ; 
            }
        }
    }
	cout<<endl;
	cout<<"\t\t\tThe Final Path for destination will be : ";path(dist , par,final ); 
}
 
void Minu (){ 
    int num=1;
	for(int i=0 ;i<5;++i)
	{
		cout<<"\t\t\t";
    	cout<<"Enter " <<num<<"\t- To Select  "<<car.mark[i]<<endl;
    	num++ ;
	} 
}
 
void Details (int theChoice){
   system("CLS");
   cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Have Selected - "<<car.mark[theChoice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[theChoice-1]<<endl;
     cout<<"\t\t\tColor : "<<car.color[theChoice-1]<<endl;
     cout<<"\t\t\tPrice Per Km : "<<"Rs "<<car.price[theChoice-1]<<endl;
     cout<<"\t\t\tAdvance amount to required book : "<<"Rs "<<car.advance[theChoice-1]<<endl;
}

void invoice(int j, int theChoice,int final){
	int par[100] , dist[100] ;
	int finaldistance = display(dist , par, final);
	int amt1= finaldistance * car.price[theChoice-1];
	int amt2 = finaldistance * car.price[theChoice-1] - car.advance[theChoice-1] ;
	cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<"#Cnb81353"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<info.Name[j]<<" |"<<endl;
    cout << "\t\t	| Customer National_ID:"<<"----------|"<<info.Natio_ID[j]<<" |"<<endl;    
    cout << "\t\t	| Car Manufacturer :"<<"-------------|"<<car.mark[theChoice-1]<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<car.model[theChoice-1]<<" |"<<endl;
    cout << "\t\t	| Total Distance(km) :"<<"-----------|"<<finaldistance<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<car.advance[theChoice-1]<<" |"<<endl;
    cout << "\t\t	 ____________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<amt1<<" |"<<endl;
    cout << "\n\t\t	| Amount due :"<<"-------|"<<amt2<<" |"<<endl;
    
    cout << "\t\t	 ____________________"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	                     Thankyou!!!"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;	
}

  void user_input(int theChoice)
   {
   system("CLS");
        int j=theChoice-1 ;
       cout<<"\t\t\t----------------------------------------\n";
       cout<<"\t\t\tPlease Provide Your Personal Details  : \n";
       cout<<"\t\t\t----------------------------------------\n\n";
       cout<<"\n\tNOTE: PROVIDE FIRST NAME ONLY, DONOT ENTER SPACE WHILE PROVIDING NAME,\n\tPAYMENT WON'T PROCEED IF THE GIVEN AMOUNT IS LESS THEN THE RATE OF CAR\n\n\n\n";
       cout<<"\t\t\tEnter Your Name : ";
       cin>>info.Name[j];
       cout<<"\t\t\tEnter Your National ID : ";
       cin>>info.Natio_ID[j] ;
       cout<<"\t\t\tAdvance Payment: " ;
       cin>>info.payment_advance[j] ;
       system("CLS");
       cout<<"Index map:\n\n";
       cout<<"0.Jammu and Kashmir        1.Leh                    2.Himachal Pradesh                3.Punjab(Jalandar)              4.Dehradun\n";
       cout<<"5.Haryana(Hansi)           6.U.P(Lucknow)           7.Rajisthan(Jaipur)               8.Bihar(Patna)                  9.Sikkim(Gangtok)\n";    
       cout<<"10.W.B(kolkata)            11.Assam                 12.Tripura                        13.Mizoram                      14.Meghalaya\n";
       cout<<"15.Manipur(Imphal)         16.Nagaland(Kohima)      17.A.P(Itanagar)                  18.Gujrat(GandhiNagar)          19.MadhyaPradesh(Bhopal)\n";
       cout<<"20.Chattisgarh(Bilaspur)   21.Jharkhand(Rachi)      22.Maharastra(Mumbai)             23.Telangana(Hyderabad)         24.Odisha(Bhubaneswar)\n";
       cout<<"25.GOA                     26.Karnataka(banglore)   27.AndhraPradesh(Visakhapatnam)   28.Kerela(Thiruvananthapuram)   29.TamilNadu(Chennai)\n\n\n";
       int src,final;
       cout<<"Enter source location : " ;  cin>>src ;
       cout<<"Enter final destination: " ;  cin>>final ;
 
 
if(info.payment_advance[j]  >= car.advance[j]){
		system("CLS");
        cout<<"\n\n\n\t\t\tProcess has been done successfully!! " <<endl;
             dijkstra(src, final) ;
     		 invoice(j,theChoice,final);
    }
    else{
    	system("CLS");
        cout<<"\n\n\n\t\t\tCar is not Available as the advance received is less than minimum booking amount" <<endl;
	}
}

int login(){
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t\t  (CAR RENTAL SYSTEM Login)";
   cout << "\n\n\n\n\n\t\t\t\t\t\t   Enter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\n\n\t\t\t\t\t\t   Access Granted! Welcome To Our System \n\n";
      system("PAUSE");
      system("CLS");
 
   }else{
      cout << "\n\n\n\n\n\t\t\t\t\t\t   Access Aborted...Please Try Again!!\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}

int main()
{
int login();
    login();
 
     string decide ="yes" ;
     cout<<"\t\t\t----------------------------------------------\n";
     cout<<"\t\t\t\t    CAR RENTAL SYSTEM \n";
     cout<<"\t\t\tWelcome to Our system ,Choose from the menu : "<<endl;
     cout<<"\t\t\t----------------------------------------------\n";
     while(decide!="exit")
    {
         Minu();
     cout<<"\n\n\n\t\t\tYour Choice: ";
     int theChoice ;
     cin>>theChoice ;
     Details(theChoice);
     cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes /no /exit ) : ";
     cin>>decide ;
     if(decide=="yes") {
        user_input(theChoice);
        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
        cin>>decide;
        if (decide=="no") break ;
system("CLS");
     }
 
   else {
      if(decide=="no")
      {
       system("CLS");
          continue ;
      }
     else if  (decide=="exit")
     {
     system("CLS");
     cout<<"\n\nThankyou for using our app!!";
 
         break ;
     }
 
   }
     }

return 0;

}
