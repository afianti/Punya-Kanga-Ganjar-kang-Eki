/*PROTOTIPE FUNGSI*/
void gotoxy(int x,int y); //Modul GoToXY
void setcolor (unsigned short color); //Modul ganti warna
int Cursor(int BanyakPilihan,int x,int y); //Modul fugsi untuk menggerakkan cursor
void MenuUtama(); //Menampilkan menu utama permainan
void BermainSendiri(); //Mode Single Player 'Bermain Sendiri'
void BermainBersamaTeman(); //Mode Multi Player 'Bermain Bersama Teman'
void CaraMain(); //Menampilkan Tatacara bermain permainan
void Permainan(int PemainYangBermain,int AIYangBermain); //Inti Permainan
void PapanInfo(); //Modul menampilkan box header untuk judul permainan
void PapanButa(); //Modul membuat papan permainan buta (tanpa simbol ular ataupun tangga)
void SimbolUlarDanTangga(); //Modul untuk meletakkan simbol ular dan tangga
void PapanGame(); //Modul untuk menampilkan papan ermainan secara utuh (Ada hiasan Header judul permainan, dan ada simbol ular dan tangga)
int KocokDadu(); //Modul fungsi untuk mengocok dadu
void Pemenang(int SiapaMenang,int MenangPemain,int Jml_Pemain,int MenangAI); //Modul menampilkan pesan jika ada yang menang
int CekAdaUlarTangga(int Petak, int status); //Modul fungsi untuk mengecek petak

/*VARIABEL GLOBAL*/
COORD coord={0,0}; //Variabel global GoToXY
