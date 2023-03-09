#include "Header.h"

class Card
{
public:
    Card() {
        cardNumber = 0;
        cardBalance = 0;
    }
    ~Card();
    void setCardNumber(int cardNumber) { this->cardNumber = cardNumber; }
    void setCardBalance(int cardBalance) { this->cardBalance = cardBalance; }
    int getCardNumber() { return cardNumber; }
    int getCardBalance() { return cardBalance; }
private:
    int cardNumber;
    int cardBalance;
};

class DebitCard : public Card
{
public:
    DebitCard() {
        cardNumber = 0;
        cardBalance = 0;
        cardDate = 0;
        cardCVV = 0;
    }
    ~DebitCard();
    void setCardNumber(int cardNumber) { this->cardBalance = cardNumber; }
    void setCardBalance(int cardBalance) { this->cardBalance = cardBalance; }
    void setCardDate(double cardDate) { this->cardDate = cardDate; }
    void setCardCVC(int cardCVC) { this->cardCVV = cardCVV; }
    int getCardNumber() { return cardNumber; }
    int getCardBalance() { return cardBalance; }
    double getCardDate() { return cardDate; }
    int getCardCVV() { return cardCVV; }
private:
    int cardNumber;
    int cardBalance;
    double cardDate;
    int cardCVV;
};

class CreditCart : public Card
{
public:
    CreditCart() {
        cardNumber = 0;
        cardBalance = 0;
        cardDate = 0;
        cardCVV = 0;
        cardLimit = 0;
    }
    ~CreditCart();
    void setCardNumber(int cardNumber) { this->cardNumber = cardNumber; }
    void setCardBalance(int cardBalance) { this->cardBalance = cardBalance; }
    void setCardDate(double cardDate) { this->cardDate = cardDate; }
    void setCardCVV(int cardCVV) { this->cardCVV = cardCVV; }
    void setCardLimit(int cardLimit) { this->cardLimit = cardLimit; }
    int getCardNumber() { return cardNumber; }
    int getCardBalance() { return cardBalance; }
    double getCardDate() { return cardDate; }
    int getCardCVV() { return cardCVV; }
    int getCardLimit() { return cardLimit; }
private:
    int cardNumber;
    int cardBalance;
    double cardDate;
    int cardCVV;
    int cardLimit;
};

class Expense
{
public:
    Expense()
    {
        expenseName = "";
        expenseSum = 0;
        expenseDate = 0;
    }
    ~Expense();
    void setExpenseName(string expenseName) { this->expenseName = expenseName; }
    void setExpenseSum(int expenseSum) { this->expenseSum = expenseSum; }
    void setExpenseDate(double expenseDate) { this->expenseDate = expenseDate; }
    string getExpenseName() { return expenseName; }
    int getExpenseSum() { return expenseSum; }
    double getExpenseDate() { return expenseDate; }
private:
    string expenseName;
    int expenseSum;
    double expenseDate;
};

class Category
{
public:
    Category()
    {
        categoryName = "";
        categorySum = 0;
    }
    ~Category();
    void setCategoryName(string categoryName) { this->categoryName = categoryName; }
    void setCategorySum(int categorySum) { this->categorySum = categorySum; }
    string getCategoryName() { return categoryName; }
    int getCategorySum() { return categorySum; }
private:
    string categoryName;
    int categorySum;
};

class Report
{
public:
    Report()
    {
        reportDay = 0;
        reportWeek = 0;
        reportMonth = 0;
    }
    ~Report();
    void setReportDay(int reportDay) { this->reportDay = reportDay; }
    void setReportWeek(int reportWeek) { this->reportWeek = reportWeek; }
    void setReportMonth(int reportMonth) { this->reportMonth = reportMonth; }
    int getReportDay() { return reportDay; }
    int getReportWeek() { return reportWeek; }
    int getReportMonth() { return reportMonth; }
private:
    int reportDay;
    int reportWeek;
    int reportMonth;
};

class Rating
{
public:
    Rating()
    {
        ratingTopExpenseWeek = 0;
        ratingTopExpenseMonth = 0;
        ratingTopCategoryWeek = 0;
        ratingTopCategoryMonth = 0;
    }
    ~Rating();
    void setRatingTopExpenseWeek(int ratingTopExpenseWeek) { this->ratingTopExpenseWeek = ratingTopExpenseWeek; }
    void setRatingTopExpenseMonth(int ratingTopExpenseMonth) { this->ratingTopExpenseMonth = ratingTopExpenseMonth; }
    void setRatingTopCategoryWeek(int ratingTopCategoryWeek) { this->ratingTopCategoryWeek = ratingTopCategoryWeek; }
    void setRatingTopCategoryMonth(int ratingTopCategoryMonth) { this->ratingTopCategoryMonth = ratingTopCategoryMonth; }
    int getRatingTopExpenseWeek() { return ratingTopExpenseWeek; }
    int getRatingTopExpenseMonth() { return ratingTopExpenseMonth; }
    int getRatingTopCategoryWeek() { return ratingTopCategoryWeek; }
    int getRatingTopCategoryMonth() { return ratingTopCategoryMonth; }
private:
    int ratingTopExpenseWeek;
    int ratingTopExpenseMonth;
    int ratingTopCategoryWeek;
    int ratingTopCategoryMonth;
};

class System
{
public:
    System()
    {
        systemReport = Report();
        systemRating = Rating();
    }
    ~System();
    void setSystemReport(Report systemReport) { this->systemReport = systemReport; }
    void setSystemRating(Rating systemRating) { this->systemRating = systemRating; }
    Report getSystemReport() { return systemReport; }
    Rating getSystemRating() { return systemRating; }
private:
    Report systemReport;
    Rating systemRating;
};

int main()
{
    System system;
    DebitCard debitCard;
    CreditCart creditCart;
    Expense expense;
    Category category;
    Report report;
    Rating rating;

    debitCard.setCardNumber(123456789);
    debitCard.setCardBalance(1000);
    debitCard.setCardDate(12.12);
    debitCard.setCardCVC(123);
    creditCart.setCardNumber(987654321);
    creditCart.setCardBalance(1000);
    creditCart.setCardDate(12.12);
    creditCart.setCardCVV(123);
    creditCart.setCardLimit(1000);
    expense.setExpenseName("Food");
    expense.setExpenseSum(100);
    expense.setExpenseDate(12.12);
    category.setCategoryName("Food");
    category.setCategorySum(100);
    report.setReportDay(100);
    report.setReportWeek(100);
    report.setReportMonth(100);
    rating.setRatingTopExpenseWeek(100);
    rating.setRatingTopExpenseMonth(100);
    rating.setRatingTopCategoryWeek(100);
    rating.setRatingTopCategoryMonth(100);
    system.setSystemReport(report);
    system.setSystemRating(rating);

    cout << "DebitCard: " << debitCard.getCardNumber() << " " << debitCard.getCardBalance() << " " << debitCard.getCardDate() << " " << debitCard.getCardCVV() << endl;
    cout << "CreditCart: " << creditCart.getCardNumber() << " " << creditCart.getCardBalance() << " " << creditCart.getCardDate() << " " << creditCart.getCardCVV() << " " << creditCart.getCardLimit() << endl;
    cout << "Expense: " << expense.getExpenseName() << " " << expense.getExpenseSum() << " " << expense.getExpenseDate() << endl;
    cout << "Category: " << category.getCategoryName() << " " << category.getCategorySum() << endl;
    cout << "Report: " << report.getReportDay() << " " << report.getReportWeek() << " " << report.getReportMonth() << endl;
    cout << "Rating: " << rating.getRatingTopExpenseWeek() << " " << rating.getRatingTopExpenseMonth() << " " << rating.getRatingTopCategoryWeek() << " " << rating.getRatingTopCategoryMonth() << endl;
    cout << "System: " << system.getSystemReport().getReportDay() << " " << system.getSystemReport().getReportWeek() << " " << system.getSystemReport().getReportMonth() << " " << system.getSystemRating().getRatingTopExpenseWeek() << " " << system.getSystemRating().getRatingTopExpenseMonth() << " " << system.getSystemRating().getRatingTopCategoryWeek() << " " << system.getSystemRating().getRatingTopCategoryMonth() << endl;

    return 0;
}