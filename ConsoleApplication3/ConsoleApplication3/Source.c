#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//void corellator_1bit(FILE *, FILE *);

FILE *outputcorilate;
FILE *output1bit;
FILE *input; //declare input file

int corellator_1bit(FILE *);
int corellator_elegxos(int,int,char *,char *);

//---------------------------------------------------------------corilate---------------------------------------------------//

int corellator_elegxos(int counterhit1,int counterhit2,char *ekswteriko,char*eswteriko)
{
	//FILE *outputcorilate;


int counterhita=0;//OUTER HIT
int countermisa=0;//OUTER MISS

int counterhitb=0;//INER  HIT
int countermisb=0;//INNER  MISS

//int counterhit1=4;//OUTER COUNTER
//int counterhit2=2;//INNER COUNTER
	
int metavlitia=1;
int metavlitib=1;

int pred1a=1;//T
int pred2a=1;//NT

int pred1b=1;//T
int pred2b=1;//NT

int provlepsi1=1;

int provlepsi2=1;

int drasi1=1;

int drasi2=1;

int newpred1a=0;
int newpred2a=0;

int newpred1b=0;
int newpred2b=0;
int i=0;
int k=0;

 
 
 	
 
 	
 for(i=1; i<counterhit1; i++)//ekswteriko iner
 {	
    
    
    //provlepsi1=pred1;
    drasi1=1;
    
 	if(provlepsi1==drasi1)
 	{
 		counterhita++;
 	}
 	else
 	{
 		countermisa++;
 	}
    
 	
 	for(k=1; k<=counterhit2; k++)//eswteriko iner
 	{
 			if(k<counterhit2 && pred2a==1)
 		{
 			drasi2=1;
 			provlepsi2=1;
 			counterhitb++;
 		}
 		
 	  
 		if(k==counterhit2 && pred2a==1)
		 {
 		   drasi2=0;
 		   pred2a=0;
 		   countermisb++;
				
 		}
 		
 		if(k<=counterhit2 && pred2a==0)
 		{
 			provlepsi2=0;
 			drasi2=0;
 			pred2a=0;
 			countermisb++;
 		}
 		

 		
 	}
 	
 }
 countermisa++;
fprintf(outputcorilate,"hit a     :");  
fprintf(outputcorilate,"%d",counterhita);
fprintf(outputcorilate,"                   ");
 for(k=0; k<8; k++)
								           {
								   
								                 fprintf(outputcorilate,"%c",eswteriko[k]);
							                     }

fprintf(outputcorilate,"\n");
fprintf(outputcorilate,"mis a     :");
fprintf(outputcorilate,"%d",countermisa);
fprintf(outputcorilate,"\n");
fprintf(outputcorilate,"hit b     :");
fprintf(outputcorilate,"%d",counterhitb);
fprintf(outputcorilate,"                   ");
 for(k=0; k<8; k++)
								           {
								   
								                 fprintf(outputcorilate,"%c",ekswteriko[k]);
							                      }

fprintf(outputcorilate,"\n");

//fprintf(outputcorilate,"\n");
fprintf(outputcorilate,"mis b     :");
fprintf(outputcorilate,"%d",countermisb);
fprintf(outputcorilate,"\n");
fprintf(outputcorilate,"\n");
return (0);






}


//---------------------------------------------------------------------------------------1-bit-------------------------------------------------//





int corellator_1bit(FILE *input)
{

     //FILE *output1bit;
	
	char p1[8];
	char p2[8];
	char paron[8];
	int flag=1;
	int flag1=0;
	int flag2=0;
	int flag3=0;
	int flag4=1;
	int flag5=1;
	int counteriner=0; //posa bransh exoume
	int counterbranch=0;
	int counterhit1=0;
	int counterhit2=0;
	int countermiss1=0;
	int countermiss2=0;
	int counter1=0;
	int i=0;//
	int j=0;//
	int k=0;//
	int z=0;//
	int t=0;
	int t1=0;//
	int t2=0;//
	int a=0;//
	int b=0;//
	int d=0;//
	int w=1;
	int h=0;
	int o=0;
	int p=0;
    int e=0;
    int asd=0;
	//char array2[size];
	//char tmparray[8];//
	//line counter
	char c;
//	output1bit = fopen("predictor_1bit.txt","w");

	 //if(output1bit == NULL) {return;}
	 /*
            if(c=fgetc(input) =='\n' || c=='\0' )
		   	    {
		   	    	printf("to arxio s den exi tipota");
		   	    	return(-1);
		   	    }
		 rewind(input);   */
		    
	 while((c=fgetc(input)) != EOF )
		   {		   	   
		   	
		   	 
		   	 
			        if(c !='\n' && t==0) //o paron perni tin proti diethinsi 00400008
				     {
				 	
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
                          
                        
						  fprintf(output1bit,"%c",p1[k]);
				         
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
						 		           
						      	// fprintf(output1bit,"flag = %d",flag1);
						      	 
						 		      if (a==8 )//an isxi pigene pano k ksanapare ali diefthinsi
						 	                   {
						 		                 fprintf(output1bit,"				");
									             fprintf(output1bit,"PROVLEPSI:T");
								                 fprintf(output1bit,"				");
								                  fprintf(output1bit,"DRASH:  ");
								                 fprintf(output1bit,"T");//an isxi tipose t
								                 counterhit1++;
								                 fprintf(output1bit,"\n");
								   
								                for(k=0; k<8; k++)
								                  {
								   
								                 fprintf(output1bit,"%c",p1[k]);
							                      }
							
								                a=0;
								                 j=0;
								   
						      	                }  
			     
						      	                
							      else
									      {
									      	 
									       fprintf(output1bit,"				");
									       fprintf(output1bit,"PROVLEPSI:T");
						                   fprintf(output1bit,"				");
						                   fprintf(output1bit,"DRASH:  ");
									       fprintf(output1bit,"NT");
									       countermiss1++;
									       fprintf(output1bit,"\n");
									           
											  
				                               
						 		     	   for (k=0; k<8; k++) //touto ginete gia ti proti fora mono sto p1 topo8etoume tin proti diefthinsi
			                                   {
				                                p2[k]=paron[k];//vale to 00400008 mesa sto p2
				                               
				                                 {
				                                
                                                  fprintf(output1bit,"%c",p2[k]);
                                                 }
				                                  
				                               }
				                               counterhit2++;
				                                  j=0;
				                                  a=0;
				                                  flag1=0;
				                                  flag2=1;
			
				                          }
				                     a=0;      
					                 j=0;
				             }
				             
				    }
				               
			
					if(j==8)
					{
						if(flag2==1)
						{ flag4=1;
						    
						    
						           for (i=0; i<8; i++)
				               	    {
					
								       if(paron[i]==p1[i]) //iner loop
								         {
								  
								          b++;
									
							             }  
							    
						 	          }
						 	          
						 	       if (b==8 )
						 	         {
						 	         	
						 		       fprintf(output1bit,"				");
									    fprintf(output1bit,"PROVLEPSI:T");
								       fprintf(output1bit,"				");
								       fprintf(output1bit,"DRASH:  ");
								       fprintf(output1bit,"NT");
								       fprintf(output1bit,"				");
								       fprintf(output1bit,"inerloup:");//an isxi tipose t
								       counteriner++;
								       fprintf(output1bit,"%d",counteriner);
								       fprintf(output1bit,"\n");
								       countermiss2++;
								       counterhit1++;
								       for (k=0; k<8; k++) //touto ginete gia ti proti fora mono sto p1 topo8etoume tin proti diefthinsi 00400004
			                             {
				                          //p1[k]=paron[k];
                                          fprintf(output1bit,"%c",p1[k]);
				         
				                         }
							             flag3=1;
							             flag2=0;
							             flag4=0;
							             b=0;
							             j=0;
								        
								     
							         }
							     
							     
						              for(k=0; k<8; k++)
								         {
								    	   if(paron[k]==p2[k])
								    	     {
								    		d++;
								    	     }
								         }
								         
								    if(d==8)
								          {
								          	
						 		           fprintf(output1bit,"				");
									       fprintf(output1bit,"PROVLEPSI:T");
								            fprintf(output1bit,"				");
								            fprintf(output1bit,"DRASH:  ");
								            fprintf(output1bit,"T");//an isxi tipose t
								            fprintf(output1bit,"\n");
								            counterhit2++;
								            for(i=0; i<8; i++)
								              {
								    	     fprintf(output1bit,"%c",p2[i]);
								              }
								               //counter1++;
								              //an isxi i diefthinsi ksanapigene stin arxi tou vroxou k pare nea diefthinsi
								              //continue;
								              flag4=0;
								              d=0;
								             b=0;
											  j=0;
						      	          }
						      	          
						      	         if(flag4==1)
						      	         {     
						      	         
						      	               counter1++;
						      	               countermiss2++;
						      	               fprintf(output1bit,"				");
									            fprintf(output1bit,"PROVLEPSI:NT");
						      	                fprintf(output1bit,"				");
						      	               fprintf(output1bit,"DRASH:  ");
						      	                fprintf(output1bit,"NT");
						      	                fprintf(output1bit,"\n");
						      	                
						      	                 fprintf(output1bit,"\n");
												fprintf(output1bit,"LOOP:  ");
												fprintf(output1bit,"%d",counter1);
												
						      	                
						      	                fprintf(output1bit,"\n");
												   fprintf(output1bit,"hit1:  ");
						      	               fprintf(output1bit,"%d",counterhit1);
						      	              
						      	               
						      	               fprintf(output1bit,"\n");
												fprintf(output1bit,"hit2:  ");
						 		       	        fprintf(output1bit,"%d",counterhit2);
						 		       	        
						 		       	        
						 		       	        fprintf(output1bit,"\n");
						 		       	        fprintf(output1bit,"miss1:  ");
						 		       	        fprintf(output1bit,"%d",countermiss1);
						 		       	        
						 		       	        
						 		       	        fprintf(output1bit,"\n");
												fprintf(output1bit,"miss2:  ");
						 		       	        fprintf(output1bit,"%d",countermiss2);
						 		       	        
						 		       	        fprintf(output1bit,"\n");
						 		       	        fprintf(output1bit,"iner:  ");
						 		       	       
						      	               fprintf(output1bit,"%d",counteriner);
						      	                fprintf(output1bit,"\n");
						      	                fprintf(output1bit,"\n");
						      	                
						      	                
						      	                
						 		       	         for(h=0; h<8; h++)
						 		       	            {
						 		       	      	    p1[h]=paron[h];
						 		       	             {
								              	      fprintf(output1bit,"%c",p1[h]);
								                     }
								                   }
								                   countermiss1=0;
								                   countermiss2=0;
								                   counterhit1=0;
								                   counterhit2=0;
								                
								                   //counteriner=0;
								                   flag2=0;
								                   flag1=1;
								                   j=0;
								                   b=0;
								                   d=0;
						      	         }
						      	          
						      	        
						      	        	
						      	   j=0;
									 b=0;
									 d=0;   
						      	  
						    
					    }
					    
					     
			     	}
			     	
			     	
				 if(j==8)
					{
						if(flag3==1)
						{ flag5=1;
						    for (i=0; i<8; i++)
				               	    {
					
								       if(paron[i]==p1[i]) //iner loop
								         {
								  
								          o++;
									
							             }  
							    
						 	          }
						 	          
						 	       if (o==8 )
						 	         {
						               fprintf(output1bit,"				");
									    fprintf(output1bit,"PROVLEPSI:NT");
						               fprintf(output1bit,"				");
						               fprintf(output1bit,"DRASH:  ");
							            fprintf(output1bit,"T");
							           fprintf(output1bit,"\n");
							           counterhit1++;
							           counteriner++;
							           for (k=0; k<8; k++) //touto ginete gia ti proti fora mono sto p1 topo8etoume tin proti diefthinsi 00400004
			                              {
				                            p1[k]=paron[k];
				                            fprintf(output1bit,"%c",p1[k]);
                                          }
	
						 		       j=0;
						 		       o=0;
						 		       flag5=0;
						 		     }
						 		    
									 
									 for(k=0; k<8; k++)
								         {
								    	   if(paron[k]==p2[k])
								    	     {
								    		e++;
								    	     }
								         }
								         
								    if(e==8)
								          {
								          	fprintf(output1bit,"				");
									        fprintf(output1bit,"PROVLEPSI:T");
								            fprintf(output1bit,"				");
								            fprintf(output1bit,"DRASH:  ");
								            fprintf(output1bit,"NT");//an isxi tipose t
								            fprintf(output1bit,"\n");
								            countermiss1++;
								            for(i=0; i<8; i++)
								              {
								    	     fprintf(output1bit,"%c",p2[i]);
								              }
								              counterhit2++;
								                flag3=0;
						 		                flag2=1;
						 		                flag5=0;
						 		                j=0;
						 		                e=0;
								              }
								              
								              
						 		          if(flag5==1)
						 		          
						 		            {    	
											 if(counteriner>0)
						      	           	{
						      	           		asd = corellator_elegxos(counterhit1,counterhit2,p1,p2);
						      	           		
						      	           	}
						      	         
						 		            
						 		            
											    counter1++;
											    fprintf(output1bit,"				");
									            fprintf(output1bit,"PROVLEPSI:NT");
						 		          	    fprintf(output1bit,"				");
						 		          	    fprintf(output1bit,"DRASH:  ");
						 		       	        fprintf(output1bit,"NT");
						 		       	        fprintf(output1bit,"\n");
						 		       	        
						 		       	        
						      	                 fprintf(output1bit,"\n");
												fprintf(output1bit,"LOOP:  ");
												fprintf(output1bit,"%d",counter1);
												
						 		       	        
						 		       	         fprintf(output1bit,"\n");
												   fprintf(output1bit,"hit1:  ");
						      	               fprintf(output1bit,"%d",counterhit1);
						      	              
						      	               
						      	               fprintf(output1bit,"\n");
												fprintf(output1bit,"hit2:  ");
						 		       	        fprintf(output1bit,"%d",counterhit2);
						 		       	        
						 		       	        
						 		       	        fprintf(output1bit,"\n");
						 		       	        fprintf(output1bit,"miss1:  ");
						 		       	        fprintf(output1bit,"%d",countermiss1);
						 		       	        
						 		       	        
						 		       	        fprintf(output1bit,"\n");
												fprintf(output1bit,"miss2:  ");
						 		       	        fprintf(output1bit,"%d",countermiss2);
						 		       	        
						 		       	        
						 		       	        fprintf(output1bit,"\n");
												fprintf(output1bit,"\n");
						 		       	         for(h=0; h<8; h++)
						 		       	        {
						 		       	      	 p1[h]=paron[h];
						 		       	    
								                   {
								              	
								    	            fprintf(output1bit,"%c",p1[h]);
								                   }
								                }
								                countermiss1=0;
								                countermiss2=0;
								                counterhit1=0;
								                counterhit2=0;
								                counteriner=0;
								                flag3=0;
								                flag1=1;
								                j=0;
								                e=0;
								                o=0;
						 		       	    
						 		           }
						 		           j=0;
						 		           e=0;
						 		           o=0;
						 		   
						}
					}
						 		       
				
				
			
			
				
		  }
			
		
return(0);
}

 


int main()//int argc, char *argv[]
{
    
    int a;		
				outputcorilate=fopen("out.txt","w");
				output1bit = fopen("predictor_1bit.txt","w");

	input = fopen("22","r");

	printf("epeksergasia......\n");
	a = corellator_1bit(input);
fclose(input);
fclose(outputcorilate);
fclose(output1bit);

	//fclose(output1bit);
    
    system("PAUSE");
	return(0);



}