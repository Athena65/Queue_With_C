#include<stdio.h>
#include<stdlib.h>
// dizi kaydýrmasý YOK -- EKLE
#define boyut 10 
   int head = 0;
   int uzunluk= 0;
   //int tail = 0; //tut kaydirma icin cikartmanin icine
   int dizi [boyut];
   int i=0;
   int ek;
 
   bool doluMu(){
            if( uzunluk== boyut ){
                return true;
            }
            return false;
        }

  bool bosMu(){
            if( uzunluk==0 )
                return true;
            return false;
        }
        
  void listele(){//dizi ciktisi verir
	int i;
	printf (" \n");
	for (i=0; i < boyut; i++) printf (" %d ",dizi[i]);
	printf (" \n");
	}

 void ekle(int deger){
            if(doluMu()){
                printf ("Kuyruk kapasitesi dolu!\n");
            }
			else{
               // dizi[tail] = deger;
                //tail++;
                dizi[uzunluk]= deger;
                uzunluk++;
                printf (" %d kuyruga eklendi. Kuyrukta %d eleman var\n",deger,uzunluk);
        
            }
            
        }
		
void cikar(){
			int i;
            if(bosMu()){
                printf ("Kuyruk bos!\n");
            }
			else{
            	uzunluk--;
                printf (" %d kuyruktan cikarildi, Kuyrukta %d eleman var.\n",dizi[head],uzunluk);
                
                printf("onceki hali ="); listele();
                
                for(i=0; i<=uzunluk;i++)
				{
                	dizi[i]=dizi[i+1];
				}
				printf("son hali=");
				listele();
            }
            
        }



int main(){
	while(true)
	{
		int a,b;
		printf("***Menu***");
		printf("\n1)Ekle \n 2)Cikar \n 3)Listele \n 4)Cikis");
		printf("\nYapmak istediginiz islem nedir?");
		scanf("%d",&a);
		
		if(a==1)
		{
			printf("Tercih=");
			scanf("%d",&b);
			ekle(b);
		}
		else if(a==2)
		{
			cikar();
		}
		else if(a==3)
		{
			printf("\nDizi=\n");
			listele();
		}
		else if(a==4)
		{
			break;
		}
		else{
			printf("\nhatali tuslama\n");
		}
		
	}

    return 0;
}

