abstract class Enemy
{
    String name;
    abstract void attack();
}

class MovingEnemy extends Enemy
{
    int speed;
    public MovingEnemy(String name,int speed)
    {
        super.name=name;
        this.speed=speed;
    }

    @Override

    public void attack()
    {
        System.out.println("Enemy is moving towards player "+name+" with the movement speed of "+speed);
    }
}

class ShootingEnemy extends Enemy
{
    String projectile;

    public ShootingEnemy(String name,String projectile)
    {
        this.name=name;
        this.projectile=projectile;
    }

    public void attack()
    {
        System.out.println("Enemy is moving towards player "+name+" and have projetile "+projectile);
    }
}
public class AttackGame
{
     public static void main(String[] args)
    {
        MovingEnemy m=new MovingEnemy("mohit", 50);
        m.attack();
         ShootingEnemy s=new ShootingEnemy("hitesh", "rocket");
         s.attack();
    }
}

/*You are building a simple game where different types of enemies have distinct
behaviors. Some enemies can move, while others can shoot projectiles.
Design a class hierarchy for enemies. Create a base class Enemy with a method
attack(). Then, create two subclasses, MovingEnemy and ShootingEnemy, which
inherit from Enemy. Implement the attack() method differently in each subclass
to represent their unique attack behavior. */