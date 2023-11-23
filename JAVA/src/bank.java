import java.util.Scanner;

class bank {
    private String accountNumber;
    private String accountHolder;
    private double balance;

    public bank(String accountNumber, String accountHolder) {
        this.accountNumber = accountNumber;
        this.accountHolder = accountHolder;
        this.balance = 0;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Amount successfully credited: Rs." + amount);
            System.out.println("Total balance: " + balance);
        } else {
            System.out.println("Invalid amount entered.");
        }
    }

    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Amount successfully debited: Rs." + amount);
            System.out.println("Total balance: " + balance);
        } else {
            System.out.println("Invalid amount entered or insufficient balance.");
        }
    }

    public void checkBalance() {
        System.out.println("The account balance is: " + balance);
    }

    public static void main(String[] args) {
        System.out.println("***** WELCOME TO BANK *****");
        Scanner input = new Scanner(System.in);

        System.out.println("Enter account number:");
        String accountNumber = input.nextLine();

        System.out.println("Enter account holder name:");
        String accountHolder = input.nextLine();

        bank account = new bank(accountNumber, accountHolder);

        while (true) {
            System.out.println("\n***** WELCOME TO BANK *****");
            System.out.println("Choose one of the following operations to perform:");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Get balance");
            System.out.println("4. Exit");

            int option = input.nextInt();

            switch (option) {
                case 1:
                    System.out.println("Enter amount to be credited:");
                    double creditAmount = input.nextDouble();
                    account.deposit(creditAmount);
                    break;

                case 2:
                    System.out.println("Enter amount to be debited:");
                    double debitAmount = input.nextDouble();
                    account.withdraw(debitAmount);
                    break;

                case 3:
                    account.checkBalance();
                    break;

                case 4:
                    System.out.println("Exiting the program.");
                    System.exit(0);
                    break;

                default:
                    System.out.println("Invalid choice");
                    break;
            }
        }
    }
}
