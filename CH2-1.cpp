#include <iostream>

using namespace std;

int main()
{
    double score[5];

    cout << "1 ��° �л� ������ �Է����ּ��� : ";
    cin >> score[0];

    cout << "2 ��° �л� ������ �Է����ּ��� : ";
    cin >> score[1];

    cout << "3 ��° �л� ������ �Է����ּ��� : ";
    cin >> score[2];

    cout << "4 ��° �л� ������ �Է����ּ��� : ";
    cin >> score[3];

    cout << "5 ��° �л� ������ �Է����ּ��� : ";
    cin >> score[4];

    double tot = score[0] + score[1] + score[2] + score[3] + score[4];
    double avg = tot / 5;

    cout << "���� : " << tot << endl;
    cout << "��� : " << avg << endl;

    return 0;
}