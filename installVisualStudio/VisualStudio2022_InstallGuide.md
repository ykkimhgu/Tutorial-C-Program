## How to Install

Microsoft 계정을 통해, 무료로 다운로드 할 수 있습니다.

<br><br>

[Click here to Download](https://visualstudio.microsoft.com/ko/vs/community/)

![image](https://user-images.githubusercontent.com/84503980/185387298-f280c598-c184-49a5-bc39-f87c82c94355.png)


**"Visual Studio 다운로드"** 버튼을 누른 뒤,  **Visual Studio Community 2022** 를 눌러 설치를 시작합니다.

<br><br>

![image](https://user-images.githubusercontent.com/84503980/185388422-de85399e-b0a7-45b5-a8ff-fdc859927f8c.png)

**C++를 사용한 데스크톱 개발** 항목을 선택한 후, 설치 버튼을 누릅니다.

<br><br>

![image](https://user-images.githubusercontent.com/84503980/185389166-eead55f5-e955-4fd7-95f3-87e73f94a263.png)

설치가 끝날 때 까지 기다립니다. 네트워크 환경에 따라 설치 시간이 오래 걸릴 수 있습니다.
[**DNS 변경**](https://ivyit.tistory.com/190)을 통해, 보다 빠르게 설치할 수 있습니다.

<br><br>

![image](https://user-images.githubusercontent.com/84503980/185390095-d0510671-f8d7-4a10-b00c-73cc276c9d6b.png)

**Visual Studio**는 **Microsoft** 계정과 연동되어 있기 때문에, 로그인 화면이 나옵니다.
본인의 계정으로 로그인합니다. 당장 진행하지 않고 건너뛰어도 무방합니다.

<br><br>

![image](https://user-images.githubusercontent.com/84503980/185390456-00fc4d8f-fdc5-4b35-a08a-856d6d529f74.png)

자신이 원하는 테마를 설정합니다. 테마 변경 또한 언제든 다시 할 수 있습니다.

<br><br>

## Visual Studio 활용하기

![image](https://user-images.githubusercontent.com/84503980/185390762-7065b68c-fab3-468b-b244-d773bdeaf696.png)

**새 프로젝트 만들기** 를 클릭합니다.

<br><br>

![image](https://user-images.githubusercontent.com/84503980/185390827-548640f3-9048-478c-8e0d-bf8469045809.png)

기본값으로 설정된 **빈 프로젝트** 를 선택한 후 다음 버튼을 누릅니다.

<br><br>

![image](https://user-images.githubusercontent.com/84503980/185392645-d08260f5-a092-46ca-b12e-ca718c3e0cf2.png)


**프로젝트란?**
작업하고 있는 main 코드를 실행시키기 위해 필요한 여러 개의 소스 파일과 헤더 파일을 하나로 묶어 놓은 집합체를 의미합니다.

**솔루션이란?**
여러 개의 프로젝트가 모인 것으로, 프로젝트의 상위 폴더 개념으로 이해할 수 있습니다. <br>
프로젝트 생성 과정에서 프로젝트와 동일한 이름으로 자동 생성되는데, 임의로 이름을 변경할 수도 있습니다. 이미 생성된 솔루션 안에 새로운 프로젝트를 추가하는 것 또한 가능합니다.

<br><br>

![image](https://user-images.githubusercontent.com/84503980/185393298-cd0bbffd-7aec-45b0-a7a7-c01b682fd112.png)

프로젝트 생성 시, 우측에 **솔루션 탐색기** 가 보입니다.
위 사진과 같이, 소스 파일에서 오른쪽 마우스 클릭을 통해 **새 항목** 을 추가합니다.

<br><br>

아래 소스코드를 입력한 후, 실행합니다 (CTRL + F5)

'''
#include <stdio.h>

int main()
{
    printf("Hello, Handong!\n");

    return 0;
}
'''

