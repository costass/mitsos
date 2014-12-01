
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

//void corellator_1bit(FILE *, FILE *);

//FILE *outputcorilate;
FILE *output1bit;
FILE *outputyeth_path;
   			            
FILE *input; //declare input file

void corellator_1bit(FILE *);

void yeth_path(int,int);

	
	
	
	int pinakas1[5] = {0,0,0,0,0};
	int hit=0;
	int miss=0;
	int all=0;
	
	int pinakas2[32][3] = 
	{
		{0,0,0},	
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
	    {0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
	    {0,0,0},
	    {0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
	    {0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
		{0,0,0},
	    {0,0,0},
	    {0,0,0},
	    {0,0,0},
	    {0,0,0},
	    {0,0,0},
	    
	    
	};
	
	
void getBin(int num, char *str)
{
int mask=0;
  *(str+5) = '\0';
  mask = 0x10 << 1;
  while(mask >>= 1)
    *str++ = !!(mask & num) + '0';
}

	
//---------------------------------------------------------------yeth- path---------------------------------------------------//

void yeth_path(int num1, int katastasi)
{
	
	int now=0;
	double vase=2;
	int a=0;
	int i=0;
	int j=0;
	int l=0;
	int k=0;
	int apotelesma=0;
	int address=0;
	char str[6];
	
	
	if(katastasi==1)
	{
		//metatropi apo diadiko se dekadiko
		
	      for(i=4; i>=0; i--)
	      {
	      
		       apotelesma= pinakas1[i] * pow(vase,j);
	       	   address = address + apotelesma;
		       j++;
		   }
		
		   
		
		
		
		
		if(num1==1)
		{
			if(pinakas2[address][0] !=0 )
			{
				pinakas2[address][0] --;
			}
				pinakas2[address][1] ++;
				hit ++;
				all++;
				
		  
		}
		if(num1==0)
		{
			if(pinakas2[address][0] !=3 )
			{
				pinakas2[address][0] ++;
			}
			
			pinakas2[address][2] ++;
			miss ++;
			all++; 
		}
		
	
	
	//push mesa sto mikro array
	
	 for(l=0; l<=4; l++)
		{
			pinakas1[l] = pinakas1[l+1];
		}
		pinakas1[4] = num1;
    }
	

   	
   	if(katastasi==0)
   	{
   		for(k=0; k<=31; k++) 
   		
   		{
   			for(j=0; j<=2; j++)
   			{
   				if(j==0)
   				{
   					
					   fprintf(outputyeth_path,"%d state :	",k);
   					
   					
   				}
   				
   				
   				 else
   				 if (j==1)
   				 {
   				 	
   				 		fprintf(outputyeth_path,"epitixies:%d		",pinakas2[k][1]);
   				 }
   				
   				
   				else
   				if(j==2)
   				{
   						fprintf(outputyeth_path,"apotixies:%d	\n",pinakas2[k][2]);
   					
   				}
   						

   				
   			}
   		}
   		
   		for(k=0; k<5; k++)
   		{
   			
   			fprintf(outputyeth_path,"%d",pinakas1[k]);
   		}
   		
   		
   		fprintf(outputyeth_path,"\n sinolikes epitixies%d/%d	\n",hit,all);
   		fprintf(outputyeth_path,"\n sinolikes apotixies%d/%d	\n",miss,all);
   	}




}


//---------------------------------------------------------------------------------------1-bit-------------------------------------------------//


void corellator_1bit(FILE *input)
{

    
	
	char p1[8];
	char p2[8];
	char p3[8];
	char paron[8];
	int flag=1;
	int flag1=0;
	int flag2=0;
	int flag3=0;
	int flag4=0;
	int flag5=1;
	int flag6=0;
	int flag7=0;
	int flag8=0;
	int counteriner=0; //posa bransh exoume
	int counterbranch=0;
	int counterhit1=0;
	int counterhit2=0;
	int counterhit3=0;
	int countermiss1=0;
	int countermiss2=0;
	int counter1=0;
	int drasi=1;
	int sinartisi=0;
	int i=0;//
	int j=0;//
	int k=0;//v
	int z=0;//

	int t1=0;//
	int t2=0;//
	int a=0;//
	int b=0;//
	int d=0;//
	int w=1;
	int t=0;
	int h=0;
	int o=0;
	int p=0;
    int e=0;
	//char array2[size];
	//char tmparray[8];//
	//line counter
	char c;
	

	 //if(output1bit == NULL) {return;}

		    //output1bit = fopen("1bit.txt","w");   
	 while((c=fgetc(input)) != EOF )
		   {
		   	 
			
			        if(c !='\n' && t==0) //o paron perni tin proti diethinsi 00400008
				     {
				 
					  if (c!='0' && c!='1'&&c!='2'&&c!='3'&&c!='4'&&c!='5'&&c!='6'&&c!='7'&&c!='8'&&c!='9'&&c!='A'&&c!='B'&&c!='C'&&c!='D'&&c!='E'&&c!='F')
						 {
							printf("EDWSES LATHOS ARXEIO\nDWSE NEO ARXEIO\n");
							system("PAUSE");
							exit(-1);
				   
						 }

			          paron[j]=c;
				      j++;
				      
		         	 }
		         
		      
			   if( j == 8)
			   { 
			   
			   	
			     if (flag==1) 
			      {
			   	       for (k=0; k<8; k++) //touto ginete gia ti proti fora mono sto p1 topo8etoume tin proti diefthinsi 00400004
			           {
				         p1[k]=paron[k];
                          
                          
						  //fprintf(output1bit,"%c",p1[k]);
				         
				       }
				       counterhit1++;
				       flag=0;
				       flag1=1;
				       
				       j=0;
			       }
			        //t=1;//den 8a ksanaektelesti
			     }
			     
			     
			     
			     	
				      if (flag1==1)
				        {
				    
				          if(j==8)//sikrino tis 2 diefthinsis
				         	{  
							  
							    for (i=0; i<8; i++)
				              	    {
					
								      if(paron[i]==p1[i]) 
								       {
								  
								        a++;
									
							           }  
							    
						 		    }		 
						 		           drasi=1;
						 		           sinartisi=1;
						 		           yeth_path(drasi,sinartisi);
						 		           
						 		           
						      	// fprintf(output1bit,"flag = %d",flag1);
						      	 
						 		      if (a==8 )//an isxi pigene pano k ksanapare ali diefthinsi
						 	                   {
						 		                 
								                 counterhit1++;
								                 //fprintf(output1bit,"\n");
								   
								                for(k=0; k<8; k++)
								                  {
								   
								                 //fprintf(output1bit,"%c",p1[k]);
							                      }
							
								                a=0;
								                 j=0;
								   
						      	                }  
			     
						      	                
							      else
									      {
									      	 
									      
									       countermiss1++;
									       //fprintf(output1bit,"\n");
									           
											  counterhit2++;
				                               
						 		     	   for (k=0; k<8; k++) //touto ginete gia ti proti fora mono sto p1 topo8etoume tin proti diefthinsi
			                                   {
				                                p2[k]=paron[k];//vale to 00400008 mesa sto p2=50
				                               
				                                 {
				                                
                                                  //fprintf(output1bit,"%c",p2[k]);
                                                 }
				                                  
				                               }
				                                  j=0;
				                                  a=0;
				                                  flag1=0;
				                                  flag2=1;
				                                  
			
				                          }
				                          
				                          
				                          
				                          
				        
				                     a=0;      
					                 j=0;
				             }
				             
				    }
				               
			
					if(flag2==1)
					{
						if(j==8)
						{ 
						 flag4=1;
						  //flag5=1;
						    
						    
						           for (i=0; i<8; i++)
				               	    {
					
								       if(paron[i]==p1[i]) //iner loop
								         {
								  
								          b++;
									
							             }  
							    
						 	          }
						 	          
						 	       if (b==8 )
						 	         {
						 		      
								       counteriner++;
								       
								       countermiss2++;
								       counterhit1++;
								      
				                         counterhit2=0;
				                         
										 
						 	               drasi=1;
						 		           sinartisi=1;
						 		           yeth_path(drasi,sinartisi);
						 		           
							            
							            flag4=0;
							           
							             b=0;
							             j=0;
							            
								        
								     
							         }
							     
							     
						              for(z=0; z<8; z++)
								         {
								    	   if(paron[z]==p2[z])
								    	     {
								    	    	d++;
								    	     }
								         }
								          
								         
								    if(d==8)
								          {
								          	
						 		           
								            counterhit2++;
								            
								            
								               
								           drasi=1;
						 		           sinartisi=1;
						 		           yeth_path(drasi,sinartisi); 
								               
								              flag2=1;
								              flag3=0;
								              flag4=0;
								              j=0;
								              d=0;
								             b=0;
											
						      	          }
						      	          
						      	          
						      	          
						      	        if(flag4==1)
						      	    
						      	           {
						      	           	
						 	              drasi=0;
						 		           sinartisi=1;
						 		           yeth_path(drasi,sinartisi);
						 		           
						      	           	
						      	           	
						      	           	
						      	      	    for (k=0; k<8; k++) //o paron ine anisos kai me to p1 kai p2 ara o p2 tha pari to p1
			                                 {
				                              p1[k]=p2[k];//p1=50
                        
                          
				         
				                            }
						      	            for (k=0; k<8; k++) //o paron ine anisos kai me to p1 kai p2 ara o p2 tha pari to p1
			                                 {
				                              p2[k]=paron[k];//p2=60
                        
				                            }
				                          
				                            
				                            
						      	    
						      	             flag1=0;
						      	             flag2=0;
						      	             flag3=1;
						      	             
						      	                countermiss1=0;
								                countermiss2=0;
								                counterhit1=0;
								                counterhit2=0;
								               // counteriner=0;
						      	          	 
						      	    
						      	    
						      	    
						      	            }
						      	          
										
						      	    
						      	     j=0;
						      	     d=0;
						      	     b=0;
						    
					    }
					    
					     
			     	}
			     	
			     	
				 if(j==8)
					{
						if(flag3==1)//
						{ flag6=1;
						
						//corellator_elegxos(counterhit1,counterhit2);
						
						     for(k=0; k<8; k++) //tote exoume iner loup*****
								         {
								    	   if(paron[k]==p2[k])
								    	     {
								    		e++;
								    	     }
								         }
								         
								    if(e==8)
								          {
								          
								            countermiss2++;
								            for(i=0; i<8; i++)
								              {
								    	     //fprintf(output1bit,"%c",p2[i]);
								              }
								               sinartisi=1;
						 		              drasi=1;
						 		               yeth_path(drasi,sinartisi);
						 		               
								                flag3=1;
						 		                //flag2=1;
						 		                flag6=0;
						 		                //flag7=1;
						 		                j=0;
						 		                e=0;
								              }
								              
								              
								              
								              
								              
						      	          for(k=0; k<8; k++)
								         {
								    	   if(paron[k]==p1[k])//iner loup
								    	     {
								    		i++;
								    	     }
								         }
								         
								    if(i==8)
								          {
								          	
						 		           
								            counteriner++;
								            for(i=0; i<8; i++)
								              {
								    	     //fprintf(output1bit,"%c",p3[i]);
								              }
								              
								              drasi=1;
						 		               sinartisi=1;
						 		               yeth_path(drasi,sinartisi);
						 		               
								               //counter1++;
								              //an isxi i diefthinsi ksanapigene stin arxi tou vroxou k pare nea diefthinsi
								              //continue;
								              flag6=0;
								              //flag7=0;
								             
								              d=0;
								             i=0;
											  j=0;
						      	          }
						      	          
						      	          
						      	          
						      	    if(flag6==1)
						      	    
						      	          {
						      	          	sinartisi=1;
						 		           drasi=0;
						 		           yeth_path(drasi,sinartisi);
											
						      	           	
						      	           	
						      	           
						      	          	  countermiss1=0;
								                countermiss2=0;
								                //counterhit1=0;
								                //counterhit2=0;
								                //counteriner=0;
								                flag2=1;
								                flag3=0;
								                flag1=0;
						      	          	 
						      	          	 
						      	          }
						      	          
					
						 		               j=0;
						 		               e=0;
						 		                o=0;
						 		   
						}
					}

			        
		  }
		  sinartisi=0;
		  yeth_path(drasi,sinartisi);
			
		

}



int main()//int argc, char *argv[]
{
    
    int a;		
    
	//outputcorilate=fopen("out.txt","w");
	//output1bit = fopen("predictor_1bit.txt","w");
	outputyeth_path = fopen("yeth_path.txt","w");

	input = fopen("22","r");

	printf("epeksergasia......\n");
	corellator_1bit(input);
    fclose(input);
    //fclose(outputcorilate);
    //fclose(output1bit);
    fclose(outputyeth_path);

	//fclose(output1bit);
    
    system("PAUSE");
	return(0);



}
 
