import java.io.*;

  class covaccine
  {
     public static void main(String args[])throws IOException
      {
         BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
         int slot;
         int age;
         long  mno;
         String name;
         System.out.println("-------------Book your vaccine slot--------------");
         
         do 
          {
             System.out.println("1)age between 55-100");
             System.out.println("2)age between 45-54");
             System.out.println("3)age between 19-44");
             System.out.println("4)exit");
             System.out.println("Select your slot:");
             slot=Integer.parseInt(br.readLine());
             switch(slot)
             {
               case 1:System.out.println("Enter your name");
                      name=br.readLine();
                      System.out.println("Enter your age");
                      age=Integer.parseInt(br.readLine());
                      if (age>=55)
		       {
		              System.out.println("Enter your Mobile number ");
		              mno=Long.parseLong(br.readLine());
		              System.out.println("Thank to book solt!!!!");
		              System.out.println("Other info is send it on your mobile through SMS");
		              break;
		       }     
		      else        
		          { System.out.println("Invalid slot choose");
                            break;
                          } 
              case 2: System.out.println("Enter your name");
                      name=br.readLine();
                      System.out.println("Enter your age");
                      age=Integer.parseInt(br.readLine());
                      if (age>=45 && age<55)
		       {
		              System.out.println("Enter your Mobile number ");
		              mno=Long.parseLong(br.readLine());
		              System.out.println("Thank to book solt!!!!");
		              System.out.println("Other info is send it on your mobile through SMS");
		              break;
		       }     
		      else        
		          { System.out.println("Invalid slot choose");
                            break;
                          }          
              case 3: System.out.println("Enter your name");
                      name=br.readLine();
                      System.out.println("Enter your age");
                      age=Integer.parseInt(br.readLine());
                      if (age>=19 && age<45)
		       {
		              System.out.println("Enter your Mobile number ");
		              mno=Long.parseLong(br.readLine());
		              System.out.println("Thank to book solt!!!!");
		              System.out.println("Other info is send it on your mobile through SMS");
		              break;
		       }     
		      else        
		          { System.out.println("Invalid slot choose");
                            break;
                          }             
                        
             }//end switch
             
          }while(slot!=4);
      }//end main()
  
  }//end class
