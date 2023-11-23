abstract class Enemy
{
    String EnemyName;
    public Enemy(String EnemyName)
    {
        this.EnemyName=EnemyName;
    }
   public abstract void attack();
}

class MovingEnemy extends Enemy
{
    String opponent;
   public MovingEnemy(String EnemyName,String opponent)
   {
    super(EnemyName);
    this.opponent=opponent;
   }

   public void attack()
   {
    System.out.println(EnemyName+" is moving towards "+opponent+" to attck him.");
   }

}

class ShootingEnemy extends Enemy
{
    String opponent;
    String projectiles;
   public ShootingEnemy(String EnemyName,String opponent,String projectiles)
   {
    super(EnemyName);
    this.opponent=opponent;
    this.projectiles=projectiles;
   }

   public void attack()
   {
    System.out.println(EnemyName+" is attacking towards "+opponent+" with "+projectiles);
   }

}

public class ad
{
     public static void main(String[] args)
    {
         MovingEnemy m=new MovingEnemy("mohit", "hitesh");
         m.attack();
         ShootingEnemy s=new ShootingEnemy("mohit", "mohit", "gun");
        s.attack();
    }
}