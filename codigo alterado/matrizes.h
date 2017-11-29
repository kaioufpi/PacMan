// quadradinhos do Mapa
int MPosicao[][PAC_MAPA_LARGURA] =
{
	{1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, // 1
	{1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //2
	{1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1}, //3
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //4
	{1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1}, //5
	{1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1}, //6
	{1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1}, ///7
	{9, 9, 9, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 9, 9, 9}, //8
	{1, 1, 1, 1, 0, 1, 1, 0, 0, 3, 0, 0, 0, 1, 0, 1, 1, 1, 1}, //9
	{2, 0, 0, 1, 0, 1, 1, 0, 5, 4, 6, 0, 0, 1, 0, 0, 0, 0, 2}, //10
	{1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1}, //11
	{9, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 9, 9, 9}, //12
	{1, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1}, //13
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //14
	{1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1}, //15
	{1, 0, 0, 1, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 1, 0, 0, 1}, //16
	{1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1}, //17
	{1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1}, //18
	{1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1}, //19
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1}, //20
	{1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};//21

//static MPosicao[][PAC_MAPA_LARGURA] tipos;
// Posi��es das Bolinhas
int PBolinhas[][PAC_MAPA_LARGURA] =
{
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //1
	{0, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0}, //2
	{0, 2, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 2, 0}, //3
	{0, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 1, 1, 0}, //4
	{0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0}, //5
	{0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0}, //6
	{0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0}, //7
	{0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0}, //8
	{0, 0, 0, 0, 1, 0, 0, 3, 3, 3, 3, 2, 3, 0, 1, 0, 0, 0, 0}, //9
	{0, 1, 1, 0, 1, 0, 0, 3, 3, 3, 3, 3, 3, 0, 1, 0, 0, 0, 0}, //10
	{0, 1, 1, 0, 1, 0, 0, 3, 3, 3, 3, 3, 3, 0, 1, 0, 0, 0, 0}, //11
	{0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0}, //12
	{0, 1, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 2, 0}, //13
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
	{0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0}, //15
	{0, 2, 1, 0, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 0, 1, 2, 0}, //16
	{0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0}, //17
	{0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0}, //18
	{0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0}, //19
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0}, //20
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};//21