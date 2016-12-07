/*******************************************************
|						login.h                        |
|******************************************************|
  로그인, 회원가입, 회원 정보 관련된 함수는 이 파일에서
  다루게 됩니다.
  menu.c 파일에서 이 파일의 함수를 사용할 것으로 예상
  되오니, 가독성 좋은 프로그램 짜시길 바래요.

  login, sign_up, 회원 탈퇴 함수 등이 필요할 것 같습니다.
  menu 프로그래머와 상의하세요.
*******************************************************/

#ifndef _LOGIN_H_
	# define _LOGIN_H_
#include "manageData.h"
#include <string.h>

/*****************************************************************
 * enum path 로그인,가입 = 1 리턴   로그아웃, 회원탈퇴 = -1 리턴* 
 *****************************************************************/

 enum path
{
	 in = 1,
	 out = -1,
};



/************************************************
 * Sign_up client에 회원가입 내용을 등록합니다.
 * 중복되는 학번 검사후 처리도 여기서 합니다.
 ************************************************/

void Sign_up(void);





/*****************************************************************************************************
 * Sign_down 그냥 sign_up의 반대라 down이라 적었습니다 말그대로 회원탈퇴
 * 학번을 입력받아 대여중인 도서가 없으면 회원탈퇴시킵니다 
 *****************************************************************************************************/

int Sign_down();



/********************************************************************
 * Revise client 구조체를 받아서 학번 이름을 제외한 정보를 수정합니다
*********************************************************************/

void Revise(void);





/***********************************************************************
 * Login client에 있는 내용을 받아서 학번과 비밀번호가 일치하는지 확인후
 * 일치하면 1을 아니면 -1을 출력합니다
 ***********************************************************************/

int Log_in();





#endif // _LOGIN_H_	
