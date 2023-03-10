# C

## C와 C++

둘은 뿌리는 같지만 C++에는 C에서 추가된 문법이 많다.

현재는 프로그램 개발 목적과 방식에 따라 한 가지 언어를 선택하는 경향이 있다.

그렇다면 무엇이 비슷하고 다르며, 어떤 때에 사용하는 것이 좋을지 알아보자.

### C

```c
#include <stdio.h>

int main() {
    printf("hello world!\n");
    return 0;
}

```

### C++

```cpp
#include <iostream>

using namespace std;

int main() {
    std::cout << "hello world!" << endl;
    return 0;
}

```

### 비교

1. C++은 namespace 개념을 사용한다
- C를 배울 때 식별자의 이름은 같을 수 없다고 배운다. 하지만 C++에서는 식별자의 이름이 같을 수 있다.

- 같은 이름의 식별자가 있을 경우 어떤 정의를 가진 식별자인지 컴파일러가 혼동하는 것을 방지하기 위해 네임스페이스를 사용한다.
2. 객체를 이용한 출력 vs 함수를 이용한 출력
- C++의 cout은 함수가 아니라 객체이기 때문에 괄호가 없다.

- cout 객체의 << 연산자는 출력 내용을 버퍼로 삽입하는 기능을 한다. 이 버퍼로 삽입된 내용이 모니터에 출력되는 것이다.

- C는 절차지향 프로그래밍을 지원하고, C++은 C의 절차지향 프로그래밍을 승계한 동시에 객체지향 프로그래밍과 일반화 프로그래밍을 모두 지원하는 언어이다.
3. 표준 입출력 라이브러리가 다르다
- C++은 STL(표준 템플릿 라이브러리)을 포함해 inline 함수와 friend 함수/클래스 등 객체지향 프로그래밍을 위한 여러 가지 라이브러리와 문법적 기능을 제공한다.

### 어떤 상황에서 사용하는가?

C언어는 **이식성**을 갖춘 프로그램을 만들 수 있다.

> 기종이 다른 컴퓨터에서도 사용할 수 있는 프로그램을 말한다.

두 언어 모두 과거에는 고급 언어로 불렸지만, 지금에는 다른 언어들에 비해 낮은 단계에서 움직이는 언어이다.

낮은 단계의 언어이지만 장점으로는, 짜야할 코드의 양이 많아지는 대신 **리소스** 관리를 섬세하게 해줄 수 있어 최적화가 용이해진다.

> 리소스 관리는 메모리 사용량/CPU에서 작업할 양과 같이 하드웨어적 자원 사용 관리를 말한다.

최근 C 언어는 응용 프로그램을 만드는 데에 덜 사용되고 있지만, 대부분 운영체제 핵심 부분이 C 언어로 구현되어 있기 때문에, 시스템 프로그래밍 혹은 임베디드 프로그래밍에 적합한 언어이다.

C++은 성능이 중요한 응용프로그램의 경우에 주로 사용된다.

C언어 기반 언어이고, 다루기 까다롭기 때문에 입문 언어로 추천되지는 않는다.

활용 분야로는 게임, 서버 등이 있다. 대표적 예시로, 유니티와 함께 게임엔진의 양대 산맥인 언리얼(unreal) 환경에서는 C++을 사용하여 프로그래밍할 수 있다.



## C 언어 표준

C 언어에는 전 세계 표준 문법인 "국제 표준"이 있다.

C 언어가 발전하면서 다양한 종류의 C 언어 컴파일러가 등장하고 서로 다른 문법을 지원하게 되자, 80년대 초반 미국의 표준화 기구인 ANSI에 의해 표준화가 시작되었다.

그렇게 89년도에 ANSI C 혹은 C89라 불리는 C 언어 표준이 완성되었다. ANSI C, C89, C90, C99, C11이 있지만, 현재 대부분 C99, C11 표준안을 사용한다. 더 최근 나온 것은 C11이지만 아직까지도 C99 표준안이 가장 사랑받고 있다.

C99부터 한줄 주석(//)과 자유로운 변수 선언을 지원하기 시작했고, for문 초기값에서 변수 선언이 가능해졌다.

현재 C언어로 작성된 대부분 프로그램은 C++ 컴파일러로 컴파일이 가능하다. 또한 C++이 대부분의 C 문법과 더불어 더 많은 문법을 허용하기 때문에 cpp파일로 생성해서 컴파일하는 경우도 많다. 


