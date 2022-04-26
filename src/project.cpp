#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
using namespace std;
class Book
{
    int id;
    char name[100];
    float price;
public:
    Book()
    {
        id = 0;
        strcpy(name, "No title");
        price = 0;
    }
    void setdata();
    void showdata();
    // file handling functions;
    int storedata();
    void viewalldata();
    void searchdata(char *);
    void deletedata(char *);
    void updatedata(char *);
};
void Book::setdata()
{
    cout << "Enter the id titile price"
         << "\n";
    cin >> id;
    cin.ignore();
    cin.getline(name, 100);
    cin >> price;
}


void Book::showdata()
{
    cout << "ID: " << id << "\n"
         << "Title: " << name << "\n"
         << "Price: " << price << "\n";
}
int Book::storedata()
{
    if (id == 0 && price == 0)
    {
        cout << "\nData not initialized";
        return 0;
    }
    else
    {
        ofstream fout;
        fout.open("Books.txt", ios::app);
        fout.write((char *)this, sizeof(*this));
        fout.close();
    }
}
void Book::viewalldata()
{
    ifstream fin;
    fin.open("Books.txt", ios::in);
    if (!fin)
    {
        cout << "\n File not found \n";
    }
    else
    {
        fin.read((char *)this, sizeof(*this));
        while ((!fin.eof()))
        {
            showdata();
            cout << "\n";
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
    }
}
void Book::searchdata(char *t)
{
    int count = 0;
    ifstream fin;
    fin.open("Books.txt", ios::in);
    if (!fin)
    {
        cout << "\n File not found \n";
    }
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (!strcmp(t, name))
            {
                showdata();
                count++;
            }
            fin.read((char *)this, sizeof(*this));
        }
        if (count == 0)
        {
            cout << "Data not found \n";
        }
        fin.close();
    }
}

void Book::deletedata(char *t)
{
    ifstream fin;
    ofstream fout;
    fin.open("Books.txt", ios::in);
    if (!fin)
    {
        cout << "\nFile not exist \n";
    }
    else
    {
        fout.open("Tempo.txt", ios::out);
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (strcmp(name, t))
            {
                fout.write((char *)this, sizeof(*this));
            }
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("Books.txt");
        rename("Tempo.txt", "Books.txt");
    }
}

void Book::updatedata(char *t)
{
    fstream file;
    file.open("Books.txt",ios::in|ios::out|ios::ate);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof()){
        if(!strcmp(t,name)){
            setdata();
            file.seekp(file.tellp()-sizeof(*this));
            file.write((char*)this,sizeof(*this));
        }
        file.read((char*)this,sizeof(*this));
    }
    file.close();
}
int main()
{
    Book b1;
    b1.setdata();
    b1.showdata();
    b1.storedata();

    return 0;
}