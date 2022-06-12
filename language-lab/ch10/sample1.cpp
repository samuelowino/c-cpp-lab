//Chapter 9: Classes and static values

class Date {
    int day;
    int month;
    int year;
    static Date default_date;

    public:
        Date(int day = 0, int month = 0, int year = 0);
        
        static void set_default(int, int, int);
};

Date::Date(int day, int month, int year){
    this.day = day;
    this.month = month;
    this.year = year;
}

int main(){
    Date::set_default(4, 5, 1995);

    Date Date::default_date(16, 12, 1779);

    Date::default_date = Date(16, 13, 1875);
}
