from datetime import date

class Person:
    def __init__(self,name,country,date_of_birth):
        self.name=name
        self.country=country
        self.date_of_birth=date_of_birth

    def calculate_age(self):
        today=date.today()
        birth_date=date.fromisoformat(self.date_of_birth)
        age=today.year-birth_date.year-((today.month,today.day)<(birth_date.month,birth_date.day))
        return age

    def get_details(self):
        return f"Name:{self.name}\nCountry:{self.country}\nDate of Birth:{self.date_of_birth}\nAge:{self.calculate_age()}"
    
p1=Person("Jishan","India","2004-05-15")
p2=Person("Tejas","India","2003-05-17")

print(p1.get_details())
print(p2.get_details())