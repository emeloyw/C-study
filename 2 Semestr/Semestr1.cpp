#include "Header.h"
void Maska() {
    setlocale(LC_ALL, "Russian");
    int i = 0;
    const short A = 20, a = 100, b = 32500;
    short m[A];
    cout << "�������: \n������� ����� �������, ������� ������������� ������� �����.\n\n��� ������:" << endl;

    for (i = 0; i < A; i++) {
        m[i] = rand() % (b - a) + a;
        cout << m[i] << " ";
    }

    short Mask;
    cout << "\n������� ������� �����: ";
    cin >> Mask;
    cout << "\n\n���������� ���������:\n�����, ������� ������������� ������� ����� ������� �����:\n";
    for (i = 0; i < A; i++) {
        if ((m[i] & Mask) == Mask)
            cout << m[i] << " ";
    }
    cout << "\n\n\n\n";
    PAUSE;
}

void Creator() {
    cout << "��������� �������� ������� ������ 1����2 �������� ������� ����������\n\n\n";
}

void lab2_1() {

    int a_1, a_2, Xmin{}, index_xmin{}, Amax, index_Amax;
    setlocale(LC_ALL, "Russian"); // ������� �����
    //cout << "�����: �������� ������� ���������� 1����2 ����: ��������� � ����������: ���������� � ������� ������" << endl;
    //���� �������� ����������
    cout << "\n������� a1 = "; cin >> a_1;
    cout << "������� a2 = "; cin >> a_2;
    //������� �� ����� ��������� � ������� ��������
    cout << "\n\n�������� ������:" << endl << "a1 = " << a_1 << endl << "a2 = " << a_2;
    //����� ������������� � � ��� �������
    if (a_1 < a_2)
    {
        Amax = a_2;
        index_Amax = 2;
    }
    else {
        Amax = a_1;
        index_Amax = 1;
    }
    cout << "\n\n����������:" << "\n\n������������ ��������� �������� � ����� " << Amax << "\n\n������ ����� �������� " << index_Amax;
    //������� �������� ������ ���������
    int x1 = a_1 - a_2;
    int x2 = (a_2 * a_2) - a_1;
    int x3 = a_1 * (x1 + x2);
    cout << "\n\nx1 = a1 - a2 = " << x1 << "\nx2 = (a2 * a2) - a1 = " << x2 << "\nx3 = a1 * (x1 + x2) = " << x3;
    //����� ������������ � � ��� �������
    if (x1 > x2) {
        Xmin = x2;
        index_xmin = 2;
    }
    else {
        Xmin = x1;
        index_xmin = 1;
    }
    if (Xmin > x3) {
        Xmin = x3;
    }
    cout << "\n\n����������� �������� ��������� ����� " << Xmin << "\n\n������ ����� ��������� ����� " << index_xmin <<"\n\n\n";
    PAUSE;
}

void lab2_2() {
    double A, B, C, k1, k2, check = 1, k = 1;
    //cout << "���������: �������� ������� ���������� 1����2";
    while (check) {
        cout << "\n����� ����� " << k << "\n";
        //������ ��������
        cout << "\n\n������� �������� �: ";
        cin >> A;
        cout << "������� �������� �: ";
        cin >> B;
        cout << "������� �������� �: ";
        cin >> C;
        cout << "\n\n�������� ������: " << "\n�= " << A << "\n�= " << B << "\n�= " << C;//������� �������� � ������� ��������
        if (A > 0 && B > 0 && C > 0) {//������ �� ������ ������������
            if (A * A + B * B == C * C) //��������� �������
                cout << "\n(A,B) - ���������� �����, � - ���������� �� ������ ��������� �� ���� �����\n";

            else if (C * C + B * B == A * A) //��������� �������
                cout << "\n(C,B) - ���������� �����, A - ���������� �� ������ ��������� �� ���� �����\n";

            else if (A * A + C * C == B * B)//��������� �������
                cout << "\n(A,C) - ���������� �����, B - ���������� �� ������ ��������� �� ���� �����\n";
            else
                cout << "\n�� ������� ����� ����������";
        }
        else
            cout << "\n\n������! ��� ��� �������� ������ ���� ��������������\n";
        cout << "\n\n������ ����������?\n�� - 1 \n ��� - 0\n";
        cin >> check;
        while (check != 0 && check != 1) { // �������� ������������ ��������� ������
            cout << "\n����������� ������� ��������!\n������ ����������?\n�� - 1\n��� - 0\n";
            cin >> check;
        }
        k++;
    }
    cout << "\n\n\n";
    PAUSE;
}

void lab3_1() {
    setlocale(LC_ALL, "Rus");
    int A, N, k, n = 0, x_1 = 0;//���������� ����������
    double dx, y{}, x, i;
    const double OMEGA = 37;
    //cout << "�����: �������� ������� 1����2 ����: ����������� ���������: ����������� ����� � ����������� ����������� � ��������� �������" << endl;
    do { //���������� ������������� �������� N
        cout << "\n������� ����������� ����� N: ";
        cin >> N;
        if (N < 1)
            cout << "������! N ������ ���� �����������!\n";
    } while (N < 1);
    do { // ���������� ������������� �������� A
        cout << "������� ������������� �������� A: ";
        cin >> A;
        if (A < 0)
            cout << "A ������ ���� �������������\n";
    } while (A < 0);
    dx = (A / static_cast<double>(4));
    do { //���������� ������������� �������� k
        cout << "������� ������������� �������� ������������ ��������� ������� K: ";
        cin >> k;
        if (k * A < x_1)
            cout << "k ������ ���� ������ x_1/�= " << x_1 / A << endl;
    } while (k < 0);
    cout << "\n\n�������� ������:" << "\n���������� ����� = " << N << "\n�������� A = " << A << "\n����������� ��������� ������� K = " << k << "\n��� = " << dx << "\n��������� ����� = " << x_1 << endl;
    cout << "N" << setw(13) << "X" << setw(20) << "Y" << endl;
    for (i = 1; i <= OMEGA;) {
        cout << "_";
        i = i + 1;
    }
    // �������������� ��������
    x = x_1;
    while (n < N) { //���� ���������� �� ���������� �����, ������� ����� ��������
        if (x <= k * A) { //����������� �� ����� ������� ����� ������� ����������� Y
            y = A - ((8 * pow(A, 3)) / (pow(x, 2) + (4 * pow(A, 3))));
        }
        if (x > k * A) {
            y = (-A) * (sqrt(abs(1 - ((pow(x, 2)) / (4 * pow(A, 2))))));
        }
        //����� �����
        cout << endl << setprecision(3) << setw(12) << left << n + 1 << setw(10) << floor(x * 1000 + 0.5) / 1000 << right << y << endl;
        //���������� ���������� � ��������� �����
        x = x + dx;
        n++;
    } while (n < N);
    for (i = 1; i <= OMEGA;) {
        cout << "_";
        i = i + 1;
    }
    cout << "\n\n\n";
    PAUSE;
}


void lab3_2() {
#define N 5
    //����������� �������� ����� � �������
    setlocale(LC_ALL, "Rus");
    int i, a = 0, imax;
    double x[N];
    double l[N];
    double z[N];
    cout << "�����: �������� ������� ���������� ������ 1����2";
    for (i = 0; i < N; i++) {
        cout << "\n������� " << i + 1 << " �������� �������� � � l\n" << "x[" << i + 1 << "]=";
        cin >> x[i];
        cout << "l[" << i + 1 << "]=";
        cin >> l[i];
        while (x[i] == 0) {
            cout << "\n������� ��������� �������� x,0 �� ����� ���� ���������� �������\n" << "x[" << i + 1 << "]=";
            cin >> x[i];
            cout << "l[" << i + 1 << "]=" << l[i];
        }
        while (l[i] == 0) {
            cout << "\n������� ��������� �������� l,0 �� ����� ���� ���������� �������\n" << "l[" << i + 1 << "]=";
            cin >> l[i];
        }
        a += (x[i] - l[i]);
    }
    cout << "������ Z:\n\n";
    cout << "[ ";
    double MAXE = -2147483648;//���� ������ ��������
    for (i = 0; i < N; i++) {
        z[i] = (a / (sqrt(abs(x[i] * l[i]))));
        cout << z[i] << " ";
        if (MAXE < z[i]) {
            MAXE = z[i];
            imax = i;
        }
    }
    cout << " ]";
    cout << "\n\n������������ ������� ������� ����� " << MAXE << "\n��� ������ ����� " << imax + 1;
    if (imax < N / 2) {
        if (imax >= 1) {
            cout << "\n\nz[" << imax + 1 << "]:" << "��������� � ������ �������� �������";
            for (i = 0; i < imax; i++)
                z[i] = x[1];
        }
        if (imax < 1)
            cout << "\n\n������ �� ���������\n";
    }
    if (imax >= N / 2) {
        cout << "\n\nz[" << imax + 1 << "]:" << "��������� �� ������ �������� �������";
        for (i = 0; i < N; i++)
            z[i] = z[i] / 2;
    }
    cout << "\n\n���������� ������ Z:\n\n";
    cout << "[ ";
    for (i = 0; i < N; i++) {
        cout << z[i] << " ";
    }
    cout << "]";
    PAUSE;
}

void lab4() {
#define ROW 5
#define COL 5 
    int m = 1, s = 0, i{}, j, k, n[COL], a[ROW][COL], t; // ���������� ����������
    setlocale(LC_ALL, "Russian"); // ������� �����
    double  b[COL], P, sr;
    cout << "�����: �������� ������� 1����2" << endl;
    // ���� �������
    for (i = 0; i < ROW; i++) //���� ������� a
    {
        cout << i + 1 << " ������ ( �� " << COL << " ��.) :";
        for (j = 0; j < COL; j++) cin >> a[i][j];
    }
    cout << endl << "����������: " << endl;
    cout << endl << "�������� ������� " << endl;
    for (i = 0; i < ROW; i++) //����� �������� �������
    {
        for (j = 0; j < COL; j++) cout << setw(6) << a[i][j];
        P = a[0][0] * a[4][4];
        cout << endl;
    }
    cout << "������������ ������� �������� ������� �� ��������� " << P << endl;
    for (j = 0; j < ROW; j++) {
        s = 0;
        for (i = 0; i < COL; i++) {
            s += a[i][j];
            k = 0;
        }
        sr = s / static_cast<double>(COL);
        b[j] = sr;
    }
    cout << endl << "������� ����� �������� :";
    for (j = 0; j < COL; j++)
        cout << "|" << b[j] << "| "; cout << endl;
    // ����� ��������, ��������������� �������
    for (j = 0; j < COL; j++)
    {
        if (b[j] > a[4][j]) {
            n[k] = j; k++;
        }
    }
    if (k > 0)
    {
        cout << endl << "������� ������������� �������: ";
        for (t = 0; t < k; t++) {
            for (i = 0; i < ROW; i++)
                a[i][n[t]] += P;
            cout << n[t] + 1 << setw(4);
        }
        cout << "\n���������� �������:\n    ";
        for (i = 0; i < ROW; i++) {
            for (j = 0; j < COL; j++)
                cout << a[i][j] << setw(6); cout << endl;
        }
    }
    else cout << "\n������� �� ����������\n\n\n" << endl;
    PAUSE;
}