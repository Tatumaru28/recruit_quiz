#pragma once
#include "question.h"

//漢字の読み取り問題を作成する
QuestionList CreateKanjiExam();

//慣用句の意味を答える問題を作成する
QuestionList CreateIdiomExam();

//同じ読みで意味が異なる語の問題を作成する
QuestionList CreateHomephoneExam();

//対義語の問題を作成する
QuestionList CreateAntonymExam();

//類義語の問題を作成する
QuestionList CreateSynonymExam();

// 国語の問題を作成する
QuestionList CreateJapaneseExam();