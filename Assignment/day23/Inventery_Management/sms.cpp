				#include<iostream>
				using namespace std;
				#define max 5
				static int prodCount = 1;

				typedef struct inventory
				{
					int product_id;
					string product_name;
				}PRODUCT;

				typedef struct stock
				{
					int stock_id;
					int stock_quantity;
					float stock_price;
				}STOCK;

				void  menu();
				int add_product(PRODUCT*, STOCK*);
				void delete_product(PRODUCT*, STOCK*);
				int searchs(PRODUCT*, STOCK*, int*, string*, int*);
				void search_display(PRODUCT*, STOCK* ,int*,string* ,int*);
				void display(PRODUCT*, STOCK*);
				int update(PRODUCT*, STOCK*,  int*, float*, int*);
				void update_display(PRODUCT*, STOCK*, int*, float*, int*);
				void list(PRODUCT*, STOCK*);
				void dis_del(PRODUCT*, STOCK*, int*, int*, float*, int*);

				void menu()
				{
					cout << "+++++++++++++++++++++++++++++++++" << endl;
					cout << "****MENU****" << endl;
					cout << "1.ADD PRODUCT" << endl;
					cout << "2.REMOVE PRODUCT" << endl;
					cout << "3.UPDATE PRODUCT" << endl;
					cout << "4.SEARCH" << endl;
					cout << "5.LIST" << endl;
					cout << "6.exit" << endl;
					cout << "click (1-6)" << endl;
					cout << "+++++++++++++++++++++++++++++++++";
				}

				int add_product(PRODUCT* p, STOCK* s)
				{
				
					cout << "id" << "==" << prodCount << endl;
					p->product_id = prodCount++;
					//p->product_id=s->stock_id ;
					cout << "enter the name " << "=";
					cin >> p->product_name;
					cout << "enter the stock quamtity" << "=";
					cin >> s->stock_quantity;
					cout << "enter the stock price" << "=";
					cin >> s->stock_price;
					return 0;
				}
				void delete_product(PRODUCT* p, STOCK* s, int* del, int* id, float* deP, int* deN)
				{
					for (int i = 0; i < 3; i++)
					{
						list(&p[i], &s[i]);
					}
					cout << "---------------------------------------" << endl;
					cout << "Enter the product ID to delete: ";
					cin >> *id;
					cout << "Enter the quantity to delete: ";
					cin >> *del;


					int deletes = 0;
					for (int i = 0; i < max; i++)
					{
						if (p[i].product_id == *id)
						{
							deletes = i;
							break;
						}
					}
					*del -= s[deletes].stock_quantity;
					*deP = s[deletes].stock_price;
					*deN = s[deletes].stock_quantity;

					cout << "--------REMOVED SUCCESSFULLY-----------" << endl;

					dis_del(&p[deletes], &s[deletes], del, id, deP, deN);
				}

				void dis_del(PRODUCT* p, STOCK* s, int* del, int* id, float* deP, int* deN)
				{
					for (int i = 0;i < 1;i++)
					{
						cout << "product id=" << *id << endl;
						cout << "product name=" << p[i].product_name << endl;
						cout << "stock quantity=" << *del << endl;
						cout << "stock price=" << s[i].stock_price << endl;
						cout << "----------------------------" << endl;
					}
				}
				int update(PRODUCT*p, STOCK*s, int* uid, float* uPrice,int*upQuantity)
				{

					cout << "---------------------------------------" << endl;
					cout << "Enter the product ID to update: "<<endl;
					cin >> *uid;
					cout << "Enter the quantity to update: "<<endl;
					cin >> *upQuantity;
					cout<<"enter the price to update:"<<endl;
					cin >> *uPrice;
					
					int updates = 0;
					for (int i = 0; i < max; i++)
					{
						if (p[i].product_id == *uid)
						{
							updates = i;
							 s[updates].stock_quantity= *upQuantity ;
						     s[updates].stock_price= *uPrice ;
							 s[updates].stock_quantity= *upQuantity ;

							break;
						}
					}
					
					cout << "--------UPDATE SUCESSFULLY-----------" << endl;

					update_display(&p[updates], &s[updates],uid,uPrice,upQuantity);
					return 0;
				}
				void update_display(PRODUCT* p, STOCK* s, int* uid, float* uPrice, int* upQuantity)
				{
					for (int i = 0;i < 1;i++)
					{
						cout << "product id=" << *uid << endl;
						cout << "product name=" << p[i].product_name << endl;
						cout << "stock quantity=" << *upQuantity << endl;
						cout << "stock price=" << *uPrice << endl;
						cout << "----------------------------" << endl;
					}
				}
				
				int searchs(PRODUCT* p, STOCK* s, int* S_id, string* S_Name, int *search)
				{
					cout << "Enter the product ID to search: ";
					cin >> *S_id;
					cout << "Enter the product name to search: ";
					cin >> *S_Name;

					for (int i = 0; i < prodCount; i++)
					{
						
						if ((*S_id == s[i].stock_id) || (p[i].product_name == *S_Name))
						{
							*search = i;
							search_display(p, s, S_id, S_Name, search);
							break;
						}
						else { cout << "Product not found." << endl; }
					}
			
					return 0;
				}


				
				void search_display(PRODUCT*p, STOCK* s,int* S_id, string* S_Name ,int *search)
				{
					for (int i = 0;i < 1;i++)
					{
						cout << "product id=" << *S_id << endl;
						cout << "product name=" << *S_Name << endl;
						cout << "stock quantity=" << s[*search].stock_quantity << endl;
						cout << "stock price=" << s[*search].stock_price << endl;
						cout << "----------------------------" << endl;
					}
				}
				void display(PRODUCT* p, STOCK* s)
				{
					cout << "----------------------------------" << endl;
					cout << "product id=" << s->stock_id << endl;
					cout << "product name=" << p->product_name << endl;
					cout << "stock quantity=" << s->stock_quantity << endl;
					cout << "stock price=" << s->stock_price << endl;
					cout << "***PRODUCT ADD SUCESSFULLY***" << endl;
					cout << "----------------------------------" << endl;
				}
				void list(PRODUCT* p, STOCK* s)
				{

					cout << "----------------------------------" << endl;
					cout << "product id=" << p->product_id << endl;
					cout << "product name=" << p->product_name << endl;
					cout << "stock quantity=" << s->stock_quantity << endl;
					cout << "stock price=" << s->stock_price << endl;
				}
				int main()
				{
					PRODUCT p[max];
					STOCK s[max];
					int del, id, deN,S_id;
					float deP, uPrice;
					int uid, upQuantity;
					int option;
					int search ;
					string S_Name;
					while (true)
					{
						menu();
						cin >> option;
						switch (option)
						{
						case 1:

							for (int i = 0;i < 3;i++)
							{
								add_product(&p[i], &s[i]);
								display(&p[i], &s[i]);
							}
							break;
						case 2:
						{
							delete_product(p, s, &id, &del, &deP, &deN);
							break;
						}
						case 3:
						{
							update(p, s, &uid,&uPrice, &upQuantity);
							break;
						}
						case 4:
						{
							searchs(p, s, &S_id,& S_Name,&search);//searchs(p,s);
							break;
						}


						case 5:
							for (int i = 0;i < prodCount;i++)
							{
								list(&p[i], &s[i]);
							}
							break;


						}
					}



					return 0;
				}
