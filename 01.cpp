#include <iostream>
#include <string>
#include <vector>

class Employee {
public:
    Employee(int id, const std::string& name, const std::string& position, double salary)
        : id(id), name(name), position(position), salary(salary), benefits(0), deductions(0), hoursWorked(0) {}

    void setBenefits(double health, double retirement) {
        benefits = health + retirement;
    }

    void setDeductions(double tax, double insurance) {
        deductions = tax + insurance;
    }

    void addHoursWorked(double hours) {
        hoursWorked += hours;
    }

    double getGrossSalary() const {
        return salary + benefits;
    }

    double getNetSalary() const {
        return getGrossSalary() - deductions;
    }

    void printEmployeeDetails() const {
        std::cout << "ID: " << id << "\nName: " << name << "\nPosition: " << position
                  << "\nGross Salary: " << getGrossSalary() << "\nNet Salary: " << getNetSalary() << std::endl;
    }

    int getId() const {
        return id;
    }

private:
    int id;
    std::string name;
    std::string position;
    double salary;
    double benefits;
    double deductions;
    double hoursWorked;
};

class SalaryCalculator {
public:
    double calculateGrossSalary(const Employee& employee) {
        return employee.getGrossSalary();
    }

    double calculateNetSalary(const Employee& employee) {
        return employee.getNetSalary();
    }
};

class UserInterface {
public:
    void displayMenu() {
        std::cout << "1. Add Employee\n2. Update Employee\n3. Delete Employee\n4. Calculate Salary\n5. Generate Report\n6. Exit\n";
    }

    int getInput() {
        int choice;
        std::cin >> choice;
        return choice;
    }

    void displayOutput(const std::string& output) {
        std::cout << output << std::endl;
    }
};

class PayrollSystem {
public:
    void addEmployee() {
        int id;
        std::string name, position;
        double salary;
        std::cout << "Enter Employee ID: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Employee Position: ";
        std::getline(std::cin, position);
        std::cout << "Enter Employee Salary: ";
        std::cin >> salary;

        employees.push_back(Employee(id, name, position, salary));
        std::cout << "Employee added successfully.\n";
    }

    void updateEmployee() {
        int id;
        std::cout << "Enter Employee ID to update: ";
        std::cin >> id;

        for (auto& emp : employees) {
            if (emp.getId() == id) {
                double health, retirement, tax, insurance;
                std::cout << "Enter Health Benefit: ";
                std::cin >> health;
                std::cout << "Enter Retirement Benefit: ";
                std::cin >> retirement;
                std::cout << "Enter Tax Deduction: ";
                std::cin >> tax;
                std::cout << "Enter Insurance Deduction: ";
                std::cin >> insurance;

                emp.setBenefits(health, retirement);
                emp.setDeductions(tax, insurance);
                std::cout << "Employee updated successfully.\n";
                return;
            }
        }
        std::cout << "Employee not found.\n";
    }

    void deleteEmployee() {
        int id;
        std::cout << "Enter Employee ID to delete: ";
        std::cin >> id;

        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if (it->getId() == id) {
                employees.erase(it);
                std::cout << "Employee deleted successfully.\n";
                return;
            }
        }
        std::cout << "Employee not found.\n";
    }

    void calculateSalary() {
        int id;
        std::cout << "Enter Employee ID to calculate salary: ";
        std::cin >> id;

        for (const auto& emp : employees) {
            if (emp.getId() == id) {
                SalaryCalculator sc;
                double grossSalary = sc.calculateGrossSalary(emp);
                double netSalary = sc.calculateNetSalary(emp);
                std::cout << "Gross Salary: " << grossSalary << "\nNet Salary: " << netSalary << std::endl;
                return;
            }
        }
        std::cout << "Employee not found.\n";
    }

    void generateReport() {
        for (const auto& emp : employees) {
            emp.printEmployeeDetails();
            std::cout << "-------------------------\n";
        }
    }

private:
    std::vector<Employee> employees;
};

int main() {
    UserInterface ui;
    PayrollSystem ps;

    while (true) {
        ui.displayMenu();
        int choice = ui.getInput();

        switch (choice) {
            case 1:
                ps.addEmployee();
                break;
            case 2:
                ps.updateEmployee();
                break;
            case 3:
                ps.deleteEmployee();
                break;
            case 4:
                ps.calculateSalary();
                break;
            case 5:
                ps.generateReport();
                break;
            case 6:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
