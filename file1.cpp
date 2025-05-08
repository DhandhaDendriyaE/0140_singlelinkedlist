#include <iostream>
#include <string.h>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
};

class list
{
    Node *START;
    
    public:
        list()
        {
            START = NULL;
        }

        void addNode()
        {
            int nim;
            cout << "\nMasukkan Nomor Mahasiswa: ";
            cin >> nim;

            Node *nodeBaru = new Node;
            nodeBaru->noMhs = nim;


            if (START == NULL || nim <= START->noMhs)
            {
                if((START != NULL) && (nim == START->noMhs))
                {
                    cout << "\nDuplikasi noMhs tdak di ijinkan\n";
                    return;
                }

                nodeBaru->next = START;
                START = nodeBaru;
                return;
            }


            Node *previous = START;
            Node *current = START;


            while ((current != NULL) && (nim >= current->noMhs))
            {
                if (nim == current->noMhs)
                {
                    cout << "\nDuplikasi noMhs tidak dijinkan\n";
                }
                previous = current;
                current = current->next;
            }

            nodeBaru->next = current;
            previous->next = nodeBaru;
        }
        bool listEmpty()
        {
            return (START == NULL);
        }
        bool Search(int nim, Node **previous, Node **current)
        {
            *previous = START;
            *current = START;
        }
           
        while ((*current != NULL) && (nim != (*current)->noMhs))
        {
            *previous = *current;
            *current = (*current)->next; 
            
            return (*current != NULL);
        }
        

        bool delNode(int nim)
        {
            Node *current, **previous;
            if (Search(nim, &previous, &current))
                return false;

            if (current == START)
                START = START->next;
            else 
                previous->next = current->next;

                delete current;
                return true;
        }

        void traverse()
            {
                if (listEmpty())
                {
                    cout << "\nList Kosong\n";
                
                else
                {
                    cout << "\nData didalam list adalah:\n";
                    Node *currentNode = START; 
                    while (currentNode != NULL)
                    {
                        cout << currentNode->data << " ";
                        currentNode = currentNode->next;
                    }
                
                }

                }   
            }
            
        int main ()
            {
            SingleLinkedList mhs;
            int nim;
            char ch;
            while (1)
            {
                cout << endl;
                    << "Menu";
                cout << endl
                    << "1. Menambah data kedalam list" << endl;
                cout << "2. Menghapus data dari dalam list"<< endl;
                cout << "3. Menampikan semua data didalam list"<< endl;
                cout << "4. mencari data dalam list"<< endl;
                cout << "5. keluar"<< endl;
                cout << endl
                    << "Masukkan pilihan (1-5): ";
                    cin >> ch;
                    switch (ch)
                    {
                    case '1':
                    }
                    {
                        mhs.addNode();
                    }
                break;
                case '2'

                if 
        }
        {

        
        cout << endl
            << "\nMasukkan no mahasiswa yang akan di hapus : ";
        cin >> nim;
        if (mhs.delNode (nim) == false)
            cout << endl
                << "Data tidak ditemukan" << endl;

                else 
                cout << endl
                    << "Data dengan nomor mahasiswa" << nim << " berhasil dihapus " << endl;
                }
                break;
                case '3':
                {
                    mhs.traverse();
                }
                break;
                case '4':
                {
                    if (mhs.listEmpty() == true)
                    {
                        cout << "\nList kosong\n";
                        break;
                    }
                    Node *previous, *current;
                    cout << endl
                        <<"\nMasukkan no mahasiswa yang dicari : ";
                    cin >> nim;
                    if(mhs.Search(nim, &previous, &current) == false)
                    cout << endl   
                        << "Data tidak ditemukan" << endl;
                        else
                        {
                            cout << endl
                            << "Data ditemukan" << endl;
                            cout << "\n no Mahasiswa " << current->noMhs << endl;
                            cout << "\n";
                        }
                }
                break;
                case '5':
                {
                    exit(0);
                }
                break;
                default;
                {
                    cout << "Pilihan salah !." << endl;
                }
                break;

            




    }
}

