#pragma once
#include<vector>

//�z����V���b�t������
void Shuffle(std::vector<int>& indices);

//�����_���Ȕԍ��z����쐬����
std::vector<int> CreateRandamIndices(int n);

//�Ԉ�����ԍ��̔z����쐬����
//n		�쐬����ԍ��͈̔�
//correctIndex	�����̔ԍ�
std::vector<int> CreateWrongIndices(int n, int corrtectIndex);