class University:
    def name(self):
        print("VIT")

class exam (University):
    def work(self):
        print("End Sem")

MCA=exam()
MCA.name()
MCA.work()

# the university class is inherited by admission cell that stores and collects registration number.
#the data collected by admission cell is further inherited by the exam section

#create a class university that displays the name of university .
#There is a class research body that provides the research funding schemes for the students.
#to complete the PG courses a student has to join any university + any research funding body.

class AdmissionCell(University):
    def __init__(self, registration_number):
        self.registration_number = registration_number

class ResearchBody:
    def __init__(self, funding_scheme):
        self.funding_scheme = funding_scheme

class PGCourse:
    def __init__(self, university, research_body):
        self.university = university
        self.research_body = research_body

admission_cell = AdmissionCell("12345")
research_body = ResearchBody("Research Funding Scheme A")
pg_course = PGCourse(admission_cell, research_body)