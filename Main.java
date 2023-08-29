import java.util.*; 
class Main{
    public static void main(String[] args)
    {
       // arr 5,4,3,2,1 k=3
       List<Integer>giveData=new ArrayList<>();
       giveData.add(1);
       giveData.add(2);
       giveData.add(3);
       giveData.add(4);
       giveData.add(5);
     //  givenData.add(5);
       int k=2;
       List<List<Integer>>ans=new ArrayList<>();
       printComb(giveData.size()-1,ans,new ArrayList<>(),k,giveData);

       for(int i=0;i<ans.size();i++)
       {
        for(int x:ans.get(i))
        {
            System.out.print(x);
        }
        System.out.println("....");
       }
    }

    public static void  printComb(int i, List<List<Integer>>ans, List<Integer>tmp,int k,List<Integer>giveData)
    {
          if(k==0)
          {
            ans.add(new ArrayList<>(tmp));
            return;
          }
          if(i<0)
          {
            return ;
          }
          
          printComb(i-1,ans,tmp,k,giveData);
          tmp.add(giveData.get(i));
          printComb(i-1,ans,tmp,k-1,giveData);
          tmp.remove(tmp.size()-1);
    }
}