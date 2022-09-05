//+ key: [version]
//++ subkey:
//= value

//+ AccessModifierOffset: [clang-format 3.3]
// The extra indent or outdent of access modifiers, e.g. public:.
//= -1
class X {
   public:
};

//+ AlignAfterOpenBracket: [clang-format 3.8]
// If true, horizontally aligns arguments after an open bracket.
// This applies to round brackets (parentheses), angle brackets and square brackets.
//= Align
// Align parameters on the open bracket
int someExtremelyLongVariableName =
		someExtremelyLongFunctionName(someExtremelyLongArgumentName_1,
                                      someExtremelyLongArgumentName_2,
                                      someRidiculouslyLongArgumentName_1,
                                      someRidiculouslyLongArgumentName_2);
//= DontAlign
// Don’t align, instead use ContinuationIndentWidth
int someExtremelyLongVariableName = someExtremelyLongFunctionName(someExtremelyLongArgumentName_1,
	someExtremelyLongArgumentName_2,
	someRidiculouslyLongArgumentName_1,
	someRidiculouslyLongArgumentName_2);
//= AlwaysBreak
// Always break after an open bracket, if the parameters don’t fit on a single line
int someExtremelyLongVariableName = someExtremelyLongFunctionName(
	someExtremelyLongArgumentName_1,
	someExtremelyLongArgumentName_2,
	someRidiculouslyLongArgumentName_1,
	someRidiculouslyLongArgumentName_2);
//= BlockIndent
// Always break after an open bracket, if the parameters don’t fit on a
// single line. Closing brackets will be placed on a new line.
// Note: This currently only applies to parentheses.
int someExtremelyLongVariableName = someExtremelyLongFunctionName(
	someExtremelyLongArgumentName_1, someExtremelyLongArgumentName_2,
	someRidiculouslyLongArgumentName_1,	someRidiculouslyLongArgumentName_2
);

//+ AlignArrayOfStructures: [clang-format 13]
// if not None, when using initialization for an array of structs aligns the
// fields into columns. // NOTE: As of clang-format 15 this option only applied
// to arrays with equal number of columns per row.
//= None
// Don’t align array initializer columns.
struct test demo[] =
{
    {56, 23,"hello"},
    {-1, 93463, "world"},
    {7,5,"!!"   }
};
//= Left
// Align array column and left justify the columns
struct test demo[] =
{
    {56, 23,    "hello"},
    {-1, 93463, "world"},
    {7,  5,     "!!"   }
};
//= Right
// Align array column and right justify the columns
struct test demo[] =
{
    {56,    23, "hello"},
    {-1, 93463, "world"},
    { 7,     5,    "!!"}
};

//+ AlignConsecutiveAssignments:[clang-format 3.8]
// Style of aligning consecutive assignments.
//= None
int a = 1;
int somelongname = 2;
double c = 3;
// after comment:
std::string s = "";

int afterNL = 0;
//= Consecutive
int a            = 1;
int somelongname = 2;
double c         = 3;
// after comment:
std::string s = "";

int afterNL = 0;
//= AcrossEmptyLines
// Whether to align across empty lines.
int a            = 1;
int somelongname = 2;
double c         = 3;
// after comment:
std::string s = "";

int afterNL = 0;
//= AcrossComments
// Whether to align across comments.
int a            = 1;
int somelongname = 2;
double c         = 3;
// after comment:
std::string s    = "";

int afterNL = 0;

//?
//? Only for AlignConsecutiveAssignments.
//? Whether compound assignments like += are aligned along with =.

//? PadOperators
//? Only for AlignConsecutiveAssignments.
//? Whether short assignment operators are left-padded to the same length as long
// ones in order to put all assignment operators to the right of the left hand side.

//= AcrossEmptyLinesAndComments
int a            = 1;
int somelongname = 2;
double c         = 3;
// after comment:
std::string s    = "";

int afterNL      = 0;

//+ AlignConsecutiveBitFields: [clang-format 11]
// Style of aligning consecutive bit fields.
//= None
int aaaa : 1;
int b : 12;
int ccc:8;
// after comment:
int dd:1;

int afterNewLine   :1;
//= Consecutive
int aaaa : 1;
int b    : 12;
int ccc  : 8;
// after comment:
int dd:1;

int afterNewLine   :1;
//= AcrossEmptyLines
// Whether to align across empty lines.
int aaaa : 1;
int b    : 12;
int ccc  : 8;
// after comment:
int dd:1;

int afterNewLine   :1;
//= AcrossComments
// Whether to align across comments.
int aaaa : 1;
int b    : 12;
int ccc  : 8;
// after comment:
int dd   : 1;

int afterNewLine   :1;
//= AcrossEmptyLinesAndComments
int aaaa         : 1;
int b            : 12;
int ccc          : 8;
// after comment:
int dd           : 1;

int afterNewLine : 1;

//+ AlignConsecutiveDeclarations: [clang-format 3.8]
// Style of aligning consecutive declarations.
//= None
int         aaaa = 12;
float       b = 23;
// after comment:
std::string ccc="";

int eee = 5;
//= Consecutive
int         aaaa = 12;
float       b    = 23;
// after comment:
std::string ccc="";

int eee = 5;
//= AcrossEmptyLines
// Whether to align across empty lines.
int         aaaa = 12;
float       b    = 23;
// after comment:
std::string ccc="";

int eee = 5;
//= AcrossComments
// Whether to align across comments.
int         aaaa = 12;
float       b    = 23;
// after comment:
std::string ccc  = "";

int eee = 5;
//= AcrossEmptyLinesAndComments
int         aaaa = 12;
float       b    = 23;
// after comment:
std::string ccc  = "";

int eee          = 5;

//+ AlignConsecutiveMacros: [clang-format 9]
// Style of aligning consecutive macro definitions.
//= None
#define SHORT_NAME 42
#define LONGER_NAME 0x007f
#define EVEN_LONGER_NAME (2)
// after comment:
#define foo(x) (x * x)

#define bar(y, z) (y + z)
//= Consecutive
#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define EVEN_LONGER_NAME (2)
// after comment:
#define foo(x) (x * x)

#define bar(y, z) (y + z)
//= AcrossEmptyLines
// Whether to align across empty lines.
#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define EVEN_LONGER_NAME (2)
// after comment:
#define foo(x) (x * x)

#define bar(y, z) (y + z)
//= AcrossComments
// Whether to align across comments.
#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define EVEN_LONGER_NAME (2)
// after comment:
#define foo(x)           (x * x)

#define bar(y, z) (y + z)
//= AcrossEmptyLinesAndComments
#define SHORT_NAME       42
#define LONGER_NAME      0x007f
#define EVEN_LONGER_NAME (2)
// after comment:
#define foo(x)           (x * x)

#define bar(y, z)        (y + z)

//+ AlignEscapedNewlines: [clang-format 5]
// Options for aligning backslashes in escaped newlines.
//= DontAlign
// Don’t align escaped newlines.
#define A   \
  int aaaa; \
  int b;    \
  int dddddddddd;
//= Left
// Align escaped newlines as far left as possible.
#define A   \
  int aaaa; \
  int b;    \
  int dddddddddd;
//= Right
// Align escaped newlines in the right-most column.
#define A                                                                      \
  int aaaa;                                                                    \
  int b;                                                                       \
  int dddddddddd;

//+ AlignOperands: [clang-format 3.5]
// If true, horizontally align operands of binary and ternary expressions.
//= DontAlign
// Do not align operands of binary and ternary expressions. The wrapped lines
// are indented ContinuationIndentWidth spaces from the start of the line.
int aaaaaaaaaaaaaaaaaaaaa = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb +
   cccccccccccccccccccccccccccccc
 + dddddddddddddddddddddddddddddd -
eeeeeeeeeeeeeeeeeeeeeeeeeeeeee
;
//= Align
// Horizontally align operands of binary and ternary expressions.
// Specifically, this aligns operands of a single expression that needs to be
// split over multiple lines. When BreakBeforeBinaryOperators is set, the
// wrapped operator is aligned with the operand on the first line.
int aaaaaaaaaaaaaaaaaaaaa = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb +
                            cccccccccccccccccccccccccccccc
                            + dddddddddddddddddddddddddddddd -
                            eeeeeeeeeeeeeeeeeeeeeeeeeeeeee;
//= BreakBeforeBinaryOperators
int aaaaaaaaaaaaaaaaaaaaa = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
                            + cccccccccccccccccccccccccccccc
                            + dddddddddddddddddddddddddddddd
                            - eeeeeeeeeeeeeeeeeeeeeeeeeeeeee;
//= AlignAfterOperator
// Horizontally align operands of binary and ternary expressions.
// This is similar to Align, except when BreakBeforeBinaryOperators is set, the
// operator is un-indented so that the wrapped operand is aligned with the
// operand on the first line.
int aaaaaaaaaaaaaaaaaaaaa = bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb
                          + cccccccccccccccccccccccccccccc
                          + dddddddddddddddddddddddddddddd
                          - eeeeeeeeeeeeeeeeeeeeeeeeeeeeee;

//+ AlignTrailingComments: [clang-format 3.7]
// If true, aligns trailing comments.
//= false
int a; // My comment a
int b = 2;// comment about b
//= true
int a;     // My comment a
int b = 2; // comment about b

//+ AllowAllArgumentsOnNextLine: [clang-format 9]
// If a function call or braced initializer list doesn’t fit on a line, allow
// putting all arguments onto the next line, even if BinPackArguments is false.
//= true
callFunction(
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa, bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb, cccccccccccccccccccccccccccccc, dddddddddddddddddddddddddddddd);
//= false
//?
callFunction(aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa,
             bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb,
             cccccccccccccccccccccccccccccc,
             dddddddddddddddddddddddddddddd);

//+ AllowAllConstructorInitializersOnNextLine: [clang-format 9]
//deprecated

//+ AllowAllParametersOfDeclarationOnNextLine: [clang-format 3.3]
// If the function declaration doesn’t fit on a line, allow putting all
// parameters of a function declaration onto the next line even if
// BinPackParameters is false.
//= true
void myFunction(
    int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa, int bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb, int cccccccccccccccccccccccccccccc,
    int dddddddddddddddddddddddddddddd, int eeeeeeeeeeeeeeeeeeeeeeeeeeeeee);
//= false
void myFunction(int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa,
                int bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb,
                int cccccccccccccccccccccccccccccc,
                int dddddddddddddddddddddddddddddd,
                int eeeeeeeeeeeeeeeeeeeeeeeeeeeeee);

//+ AllowShortBlocksOnASingleLine: [clang-format 3.5]
// Dependent on the value, while (true) { continue; } can be put on a single line.
//= Never
// Never merge blocks into a single line.
while (true) {
}
while (true) {
  continue;
}
//= Empty
// Only merge empty blocks.
while (true) {}
while (true) {
  continue;
}
//= Always
// Always merge short blocks into a single line.
while (true) {}
while (true) { continue; }

//+ AllowShortCaseLabelsOnASingleLine: [clang-format 3.6]
// If true, short case labels will be contracted to a single line.
//= false
switch (a) {
case 1:
    x = 1;
    break;
case 2:
    return;
}
//= true
switch (a) {
case 1: x = 1; break;
case 2: return;
}

//+ AllowShortEnumsOnASingleLine: [clang-format 11]
// Allow short enums on a single line.
//= true
enum { A, B } myEnum;
//= false
enum {
  A,
  B
} myEnum;

//+ AllowShortFunctionsOnASingleLine: [clang-format 3.5]
// Dependent on the value, int f() { return 0; } can be put on a single line.
//= None
// Never merge functions into a single line
class Foo {
  void f() { foo(); }
};
void f() {
  foo();
}
void f() {
}
//= Empty
// Only merge empty functions.
class Foo {
  void f() { foo(); }
};
void f() {
  foo();
}
void f() {}
//= Inline
// Only merge functions defined inside a class. Implies “empty”.
class Foo {
  void f() { foo(); }
};
void f() {
  foo();
}
void f() {}
//= InlineOnly
// Only merge functions defined inside a class. Same as “inline”, except it
// does not imply “empty”: i.e. top level empty functions are not merged either.
class Foo {
  void f() { foo(); }
};
void f() {
  foo();
}
void f() {}
//= All
// Merge all functions fitting on a single line.
class Foo {
  void f() { foo(); }
};
void f() { bar(); }

//+ AllowShortIfStatementsOnASingleLine: [clang-format 3.3]
// Dependent on the value, if (a) return; can be put on a single line.
//= Never
// Never put short ifs on the same line.
if (a)
  return;

if (b)
  return;
else
  return;

if (c)
  return;
else {
  return;
}
//= WithoutElse
// Put short ifs on the same line only if there is no else statement.
if (a) return;

if (b)
  return;
else
  return;

if (c)
  return;
else {
  return;
}
//= OnlyFirstIf
// Put short ifs, but not else ifs nor else statements, on the same line.
if (a) return;

if (b) return;
else if (b)
  return;
else
  return;

if (c) return;
else {
  return;
}
//= AllIfsAndElse
// Always put short ifs, else ifs and else statements on the same line.
if (a) return;

if (b) return;
else return;

if (c) return;
else {
  return;
}

//+ AllowShortLambdasOnASingleLine: [clang-format 9]
// Dependent on the value, auto lambda []() { return 0; } can be put on a single line.
//= None
// Never merge lambdas into a single line.
auto lambda = [](int a) {
}
auto lambda2 = [](int a) {
    return a;
};
//= Empty
// Only merge empty lambdas.
auto lambda = [](int a) {}
auto lambda2 = [](int a) {
    return a;
};
//= Inline
// Merge lambda into a single line if argument of a function.
auto lambda = [](int a) {
    return a;
};
sort(a.begin(), a.end(), ()[] { return x < y; })
//= All
// Merge all lambdas fitting on a single line.
auto lambda = [](int a) {}
auto lambda2 = [](int a) { return a; };

//+ AllowShortLoopsOnASingleLine: [clang-format 3.7]
// If true, while (true) continue; can be put on a single line.
//= true
while(true)sleep(0);
while(true){sleep(0);}
for(;;)sleep(0);
for(;;){sleep(0);}
// false:
while (true)
	sleep(0);
while (true)
{
	sleep(0);
}
for (;;)
	sleep(0);
for (;;)
{
	sleep(0);
}

//+ AlwaysBreakAfterDefinitionReturnType: [clang-format 3.7]
//deprecated

//+ AlwaysBreakAfterReturnType: [clang-format 3.8]
// The function declaration return type breaking style to use.
//= None
// Break after return type automatically.
// PenaltyReturnTypeOnItsOwnLine is taken into account.
class A {
  int f() { return 0; };
};
int f();
int f() { return 1; }
//= All
// Always break after the return type.
class A {
  int
  f() {
    return 0;
  };
};
int
f();
int
f() {
  return 1;
}
//= TopLevel
// Always break after the return types of top-level functions.
class A {
  int f() { return 0; };
};
int
f();
int
f() {
  return 1;
}
//= AllDefinitions
// Always break after the return type of function definitions.
class A {
  int
  f() {
    return 0;
  };
};
int f();
int
f() {
  return 1;
}
//= TopLevelDefinitions
// Always break after the return type of top-level definitions.
class A {
  int f() { return 0; };
};
int f();
int
f() {
  return 1;
}

//+ AlwaysBreakBeforeMultilineStrings: [clang-format 3.4]
// If true, always break before multiline string literals.
// This flag is mean to make cases where there are multiple multiline strings
// in a file look more consistent. Thus, it will only take effect if wrapping
// the string at that point leads to it being indented ContinuationIndentWidth
// spaces from the start of the line.
//= true
aaaa =
  "bbbb"
  "cccc";
//= false
aaaa = "bbbb"
       "cccc";

//+ AlwaysBreakTemplateDeclarations: [clang-format 3.4]
// The template declaration breaking style to use.
//= No
// Do not force break before declaration. PenaltyBreakTemplateDeclaration is
// taken into account.
template <typename T> T foo() {
}
template <typename T> T foo(int aaaaaaaaaaaaaaaaaaaaa,
                            int bbbbbbbbbbbbbbbbbbbbb) {
}
//= MultiLine
// Force break after template declaration only when the following declaration
// spans multiple lines.
template <typename T> T foo() {
}
template <typename T>
T foo(int aaaaaaaaaaaaaaaaaaaaa,
      int bbbbbbbbbbbbbbbbbbbbb) {
}
//= Yes
// Always break after template declaration.
template <typename T>
T foo() {
}
template <typename T>
T foo(int aaaaaaaaaaaaaaaaaaaaa,
      int bbbbbbbbbbbbbbbbbbbbb) {
}

//+ AttributeMacros: [clang-format 12]
// A vector of strings that should be interpreted as attributes/qualifiers
// instead of identifiers.
// This can be useful for language extensions or static analyzer annotations.
//= (List of Strings)

//+ BinPackArguments: [clang-format 3.7]
// If false, a function call’s arguments will either be all on the same line or
// will have one line each.
//= false
void f() {
  f(aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
}
//= true
void f() {
  f(aaaaaaaaaaaaaaaaaaaa, aaaaaaaaaaaaaaaaaaaa,
    aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
}

//+ BinPackParameters: [clang-format 3.7]
// If false, a function declaration’s or function definition’s parameters will
// either all be on the same line or will have one line each.
//= false
void f(int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa) {}
//= true
void f(int aaaaaaaaaaaaaaaaaaaa, int aaaaaaaaaaaaaaaaaaaa,
       int aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa) {}

//+ BitFieldColonSpacing: [clang-format 12]
// The BitFieldColonSpacingStyle to use for bitfields.
//= None
// Add no space around the : (except when needed for AlignConsecutiveBitFields).
unsigned bf:2;
//= Before
// Add space before the : only
unsigned bf :2;
//= After
// Add space after the : only
// (space may be added before if needed for AlignConsecutiveBitFields).
unsigned bf: 2;
//= Both
// Add one space on each side of the :
unsigned bf : 2;

//+ BraceWrapping: [clang-format 3.8]
// Control of individual brace wrapping cases.
//++ AfterCaseLabel
//= false
switch (foo) {
 case 1: {
 }
}
//= true
switch (foo) {
 case 1:
 {
 }
}
//++ AfterClass:
//= false
class foo
{};
//= true
class foo {};

//++ AfterControlStatement:
//= Never
if (foo()) {
} else {
}
for (int i = 0; i < 10; ++i) {
}
//= MultiLine
if (foo && bar &&
    baz)
{
  quux();
}
while (foo || bar) {
}
//= Always
if (foo())
{
} else
{}
for (int i = 0; i < 10; ++i)
{}

//++ AfterEnum:
//= false
enum X : int { B };
//= true
enum X : int
{
  B
};

//++ AfterFunction:
//= false
void foo() {
  bar();
  bar2();
}
//= true
void foo()
{
  bar();
  bar2();
}

//++ AfterNamespace:
//= false
namespace {
int foo();
int bar();
}
//= true
namespace
{
int foo();
int bar();
}

//++ AfterObjCDeclaration:

//++ AfterStruct:
//= false
struct foo {
  int x;
};
//= true
struct foo
{
  int x;
};

//++ AfterUnion:
//= false
union foo {
  int x;
}
//= true
union foo
{
  int x;
}

//++ AfterExternBlock:
//= false
extern "C" {
int foo();
}
//= true
extern "C"
{
  int foo();
}

//++ BeforeCatch:
//= false
try {
  foo();
} catch () {
}
//= true
try {
  foo();
}
catch () {
}

//++ BeforeElse:
//= false
if (foo()) {
} else {
}
//= true
if (foo()) {
}
else {
}

//++ BeforeLambdaBody:
//= false
connect([]() {
  foo();
  bar();
});
//= true
connect(
  []()
  {
    foo();
    bar();
  });

//++ BeforeWhile:
//= false
do {
  foo();
}
//= true
do {
  foo();
}
while (1);

//++ IndentBraces:
//= false
//= true
//?

//++ SplitEmptyFunction:
//= false
int f()
{}
//= true
int f()
{
}

//++ SplitEmptyNamespace:
//= false
namespace Foo
{}
//= true
namespace Foo
{
}

//++ SplitEmptyRecord:
//= false
class Foo
{}
//= true
class Foo
{
}

//+ BreakAfterJavaFieldAnnotations: [clang-format 3.8]
// Break after each annotation on a field in Java files.
//= false
@Partial @Mock DataLoad loader;
//= true
@Partial
@Mock
DataLoad loader;

//+ BreakBeforeBinaryOperators: [clang-format 3.6]
// The way to wrap binary operators.
//= None
ooooooooooongType loooooooooooooooooooooongVariable =
    someLooooooooooooooooongFunction();

bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa +
                     aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa ==
                 aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa &&
             aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa >
                 ccccccccccccccccccccccccccccccccccccccccc;
//= NonAssignment
LooooooooooongType loooooooooooooooooooooongVariable =
    someLooooooooooooooooongFunction();

bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                     + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                 == aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
             && aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                    > ccccccccccccccccccccccccccccccccccccccccc;
//= All
LooooooooooongType loooooooooooooooooooooongVariable
    = someLooooooooooooooooongFunction();

bool value = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                     + aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                 == aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
             && aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
                    > ccccccccccccccccccccccccccccccccccccccccc;

//+ BreakBeforeBraces: [clang-format 3.7]
// The brace breaking style to use.
//= Attach
// Always attach braces to surrounding context.
namespace N {
enum E {
  E1,
  E2,
};

class C {
public:
  C();
};

bool baz(int i) {
  try {
    do {
      switch (i) {
      case 1: {
        foobar();
        break;
      }
      default: {
        break;
      }
      }
    } while (--i);
    return true;
  } catch (...) {
    handleError();
    return false;
  }
}

void foo(bool b) {
  if (b) {
    baz(2);
  } else {
    baz(5);
  }
}

void bar() { foo(true); }
} // namespace N
//= Linux
// Like Attach, but break before braces on function, namespace and class definitions.
namespace N
{
enum E {
  E1,
  E2,
};

class C
{
public:
  C();
};

bool baz(int i)
{
  try {
    do {
      switch (i) {
      case 1: {
        foobar();
        break;
      }
      default: {
        break;
      }
      }
    } while (--i);
    return true;
  } catch (...) {
    handleError();
    return false;
  }
}

void foo(bool b)
{
  if (b) {
    baz(2);
  } else {
    baz(5);
  }
}

void bar() { foo(true); }
} // namespace N
//= Mozilla
// Like Attach, but break before braces on enum, function, and record definitions.
namespace N {
enum E
{
  E1,
  E2,
};

class C
{
public:
  C();
};

bool baz(int i)
{
  try {
    do {
      switch (i) {
      case 1: {
        foobar();
        break;
      }
      default: {
        break;
      }
      }
    } while (--i);
    return true;
  } catch (...) {
    handleError();
    return false;
  }
}

void foo(bool b)
{
  if (b) {
    baz(2);
  } else {
    baz(5);
  }
}

void bar() { foo(true); }
} // namespace N
//= Stroustrup
// Like Attach, but break before function definitions, catch, and else.
namespace N {
enum E {
  E1,
  E2,
};

class C {
public:
  C();
};

bool baz(int i)
{
  try {
    do {
      switch (i) {
      case 1: {
        foobar();
        break;
      }
      default: {
        break;
      }
      }
    } while (--i);
    return true;
  }
  catch (...) {
    handleError();
    return false;
  }
}

void foo(bool b)
{
  if (b) {
    baz(2);
  }
  else {
    baz(5);
  }
}

void bar() { foo(true); }
} // namespace N
//= Allman
// Always break before braces.
namespace N
{
enum E
{
  E1,
  E2,
};

class C
{
public:
  C();
};

bool baz(int i)
{
  try
  {
    do
    {
      switch (i)
      {
      case 1:
      {
        foobar();
        break;
      }
      default:
      {
        break;
      }
      }
    } while (--i);
    return true;
  }
  catch (...)
  {
    handleError();
    return false;
  }
}

void foo(bool b)
{
  if (b)
  {
    baz(2);
  }
  else
  {
    baz(5);
  }
}

void bar() { foo(true); }
} // namespace N
//= Whitesmiths
// Like Allman but always indent braces and line up code with braces.
namespace N
  {
enum E
  {
  E1,
  E2,
  };

class C
  {
public:
  C();
  };

bool baz(int i)
  {
  try
    {
    do
      {
      switch (i)
        {
        case 1:
        {
        foobar();
        break;
        }
        default:
        {
        break;
        }
        }
      } while (--i);
    return true;
    }
  catch (...)
    {
    handleError();
    return false;
    }
  }

void foo(bool b)
  {
  if (b)
    {
    baz(2);
    }
  else
    {
    baz(5);
    }
  }

void bar() { foo(true); }
  } // namespace N
//= GNU
// Always break before braces and add an extra level of indentation to braces of control statements, not to those of class, function or other definitions.
namespace N
{
enum E
{
  E1,
  E2,
};

class C
{
public:
  C();
};

bool baz(int i)
{
  try
    {
      do
        {
          switch (i)
            {
            case 1:
              {
                foobar();
                break;
              }
            default:
              {
                break;
              }
            }
        }
      while (--i);
      return true;
    }
  catch (...)
    {
      handleError();
      return false;
    }
}

void foo(bool b)
{
  if (b)
    {
      baz(2);
    }
  else
    {
      baz(5);
    }
}

void bar() { foo(true); }
} // namespace N
//= WebKit
// Like Attach, but break before functions.
namespace N {
enum E {
  E1,
  E2,
};

class C {
public:
  C();
};

bool baz(int i)
{
  try {
    do {
      switch (i) {
      case 1: {
        foobar();
        break;
      }
      default: {
        break;
      }
      }
    } while (--i);
    return true;
  } catch (...) {
    handleError();
    return false;
  }
}

void foo(bool b)
{
  if (b) {
    baz(2);
  } else {
    baz(5);
  }
}

void bar() { foo(true); }
} // namespace N
//= Custom
// Configure each individual brace in BraceWrapping.

//+ BreakBeforeConceptDeclarations: [clang-format 12]
// The concept declaration style to use.
//= Never
// Keep the template declaration line together with concept.
template <typename T> concept C = ...;
//= Allowed
// Breaking between template declaration and concept is allowed. The actual
// behavior depends on the content and line breaking rules and penalities.
//= Always
// Always break before concept, putting it in the line after the template declaration.

//+ BreakBeforeTernaryOperators: [clang-format 3.7]
// If true, ternary operators will be placed after line breaks.
//= false
veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongDescription ?
    firstValue :
    SecondValueVeryVeryVeryVeryLong;
//= true
veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongDescription
    ? firstValue
    : SecondValueVeryVeryVeryVeryLong;

//+ BreakConstructorInitializers: [clang-format 7]
// The inheritance list style to use.
//= BeforeColon
// Break constructor initializers before the colon and after the commas.
Constructor()
    : initializer1(),
      initializer2()
//= BeforeComma
// Break constructor initializers before the colon and commas, and align the
//commas with the colon.
Constructor()
    : initializer1()
    , initializer2()
//= AfterColon
// Break constructor initializers after the colon and commas.
Constructor() :
    initializer1(),
    initializer2()

//+ BreakInheritanceList: [clang-format 7]
// The inheritance list style to use.
//= BeforeColon
// Break inheritance list before the colon and after the commas.
class Foo
    : Base1,
      Base2
{};
//= BeforeComma
// Break inheritance list before the colon and commas, and align the commas
// with the colon.
class Foo
    : Base1
    , Base2
{};
//= AfterColon
// Break inheritance list after the colon and commas.
class Foo :
    Base1,
    Base2
{};
//= AfterComma
// Break inheritance list only after the commas.
class Foo : Base1,
            Base2
{};

//+ BreakStringLiterals: [clang-format 3.9]
// Allow breaking string literals when formatting.
//= false
const char* x =
  "veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongString";
//= true
const char* x = "veryVeryVeryVeryVeryVe"
                "ryVeryVeryVeryVeryVery"
                "VeryLongString";

//+ ColumnLimit: [clang-format 3.7]
// A column limit of 0 means that there is no column limit.
// In this case, clang-format will respect the input’s line breaking decisions
// within statements unless they contradict other rules.

//+ CommentPragmas: [clang-format 3.7]
// A regular expression that describes comments with special meaning,
// which should not be split into lines or otherwise changed.
#include <vector> // FOOBAR pragma: keep

//+ CompactNamespaces: [clang-format 5]
// If true, consecutive namespace declarations will be on the same line.
// If false, each namespace is declared on a new line.
//= false
namespace Foo {
namespace Bar {
}
}
//= true
namespace Foo { namespace Bar {
}}

//+ ConstructorInitializerAllOnOneLineOrOnePerLine: [clang-format 3.7]
// deprecated

//+ ConstructorInitializerIndentWidth: [clang-format 3.7]
// The number of characters to use for indentation of constructor initializer
// lists as well as inheritance lists.

//+ ContinuationIndentWidth: [clang-format 3.7]
// Indent width for line continuations.
int i =         //  VeryVeryVeryVeryVeryLongComment
  longFunction( // Again a long comment
    arg);

//+ Cpp11BracedListStyle: [clang-format 3.4]
// If true, format braced lists as best suited for C++11 braced lists.
// Important differences: - No spaces inside the braced list. - No line break
// before the closing brace. - Indentation with the continuation indent, not
// with the block indent.
// Fundamentally, C++11 braced lists are formatted exactly like function calls
// would be formatted in their place. If the braced list follows a name
// (e.g. a type or variable name), clang-format formats as if the {} were the
// parentheses of a function call with that name. If there is no name, a
// zero-length name is assumed.
//= false
vector<int> x{ 1, 2, 3, 4 };
vector<T> x{ {}, {}, {}, {} };
f(MyMap[{ composite, key }]);
new int[3]{ 1, 2, 3 };
//= true
vector<int> x{1, 2, 3, 4};
vector<T> x{{}, {}, {}, {}};
f(MyMap[{composite, key}]);
new int[3]{1, 2, 3};

//+ DeriveLineEnding. [clang-format 10]
// Analyze the formatted file for the most used line ending (\r\n or \n).
// UseCRLF is only used as a fallback if none can be derived.

//+ DerivePointerAlignment. [clang-format 3.7]
// If true, analyze the formatted file for the most common alignment of & and
// *. Pointer and reference alignment styles are going to be updated according
// to the preferences found in the file. PointerAlignment is then used only as fallback.

//+ DisableFormat. [clang-format 3.7]
// Disables formatting completely.

//+ EmptyLineAfterAccessModifier. [clang-format 13]
// Defines when to put an empty line after access modifiers.
// EmptyLineBeforeAccessModifier configuration handles the number of empty
// lines between two access modifiers.
//= Never
// Remove all empty lines after access modifiers.
struct foo {
private:
  int i;
protected:
  int j;
  /* comment */
public:
  foo() {}
private:
protected:
};
//= Leave
// Keep existing empty lines after access modifiers. MaxEmptyLinesToKeep is
// applied instead.
//= Always
// Always add empty line after access modifiers if there are none.
// MaxEmptyLinesToKeep is applied also.
struct foo {
private:

  int i;
protected:

  int j;
  /* comment */
public:

  foo() {}
private:

protected:

};

//+ EmptyLineBeforeAccessModifier. [clang-format 12]
// Defines in which cases to put empty line before access modifiers.
//= Never
// Remove all empty lines before access modifiers.
struct foo {
private:
  int i;
protected:
  int j;
  /* comment */
public:
  foo() {}
private:
protected:
};
//= Leave
// Keep existing empty lines before access modifiers.
//= LogicalBlock
// Add empty line only when access modifier starts a new logical block.
// Logical block is a group of one or more member fields or functions.
struct foo {
private:
  int i;

protected:
  int j;
  /* comment */
public:
  foo() {}

private:
protected:
};
//= Always
// Always add empty line before access modifiers unless access modifier is at
// the start of struct or class definition.
struct foo {
private:
  int i;

protected:
  int j;
  /* comment */

public:
  foo() {}

private:

protected:
};

//+ ExperimentalAutoDetectBinPacking: [clang-format 3.7]
// If true, clang-format detects whether function calls and definitions are
// formatted with one parameter per line.
// Each call can be bin-packed, one-per-line or inconclusive. If it is
// inconclusive, e.g. completely on one line, but a decision needs to be made,
// clang-format analyzes whether there are other bin-packed cases in the input
// file and act accordingly.

//+ FixNamespaceComments: [clang-format 5]
// If true, clang-format adds missing namespace end comments for short
// namespaces and fixes invalid existing ones. Short ones are controlled by
// “ShortNamespaceLines”.
//= false
namespace a {
foo();
bar();
}
//= true
namespace a {
foo();
bar();
} // namespace a

//+ ForEachMacros: [clang-format 3.7]
// A vector of macros that should be interpreted as foreach loops instead of as
// function calls.

//+ IfMacros: [clang-format 13]
// A vector of macros that should be interpreted as conditionals instead of as
// function calls.

//+ IncludeBlocks: [clang-format 6]
// Dependent on the value, multiple #include blocks can be sorted as one and
// divided based on category.
//= Preserve
// Sort each #include block separately.
#include "b.h"

#include "a.h"
#include <lib/main.h>
//= Merge
#include "a.h"
#include "b.h"
#include <lib/main.h>
//= Regroup
#include "a.h"
#include "b.h"

#include <lib/main.h>

//+ IncludeCategories: [clang-format 3.8]
// Regular expressions denoting the different #include categories used for
// ordering #includes.

//+ IncludeIsMainRegex: [clang-format 3.9]
// Specify a regular expression of suffixes that are allowed in the
// file-to-main-include mapping.
// When guessing whether a #include is the “main” include (to assign category 0,
// see above), use this regex of allowed suffixes to the header stem.
// A partial match is done, so that: - “” means “arbitrary suffix” - “$” means “no suffix”
// For example, if configured to “(_test)?$”, then a header a.h would be seen
// as the “main” include in both a.cc and a_test.cc.

//+ IncludeIsMainSourceRegex: [clang-format 10]
// Specify a regular expression for files being formatted that are allowed to
// be considered “main” in the file-to-main-include mapping.
// By default, clang-format considers files as “main” only when they end with:
// .c, .cc, .cpp, .c++, .cxx, .m or .mm extensions. For these files a guessing
// of “main” include takes place (to assign category 0, see above).
// This config option allows for additional suffixes and extensions for files
// to be considered as “main”.
// For example, if this option is configured to (Impl\.hpp)$, then a file
// ClassImpl.hpp is considered “main” (in addition to
// Class.c, Class.cc, Class.cpp and so on) and “main include file” logic will
// be executed (with IncludeIsMainRegex setting also being respected in later phase).
// Without this option set, ClassImpl.hpp would not have the main include file
// put on top before any other include.

//+IndentAccessModifiers: [clang-format 13]
// Specify whether access modifiers should have their own indentation level.
// When false, access modifiers are indented (or outdented) relative to the
// record members, respecting the AccessModifierOffset. Record members are
// indented one level below the record. When true, access modifiers get their
// own indentation level. As a consequence, record members are always indented
// 2 levels below the record, regardless of the access modifier presence.
// Value of the AccessModifierOffset is ignored.
//= false
class C {
  class D {
    void bar();
  protected:
    D();
  };
public:
  C();
};
//= true
class C {
    class D {
        void bar();
      protected:
        D();
    };
  public:
    C();
};

//+ IndentCaseBlocks: [clang-format 11]
// Indent case label blocks one level from the case label.
// When false, the block following the case label uses the same indentation
// level as for the case label, treating the case label the same as an
// if-statement. When true, the block gets indented as a scope block.
//= false
switch (fool) {
case 1: {
  bar();
} break;
default: {
  plop();
}
}
//= true
switch (fool) {
case 1:
  {
    bar();
  }
  break;
default:
  {
    plop();
  }
}

//+ IndentCaseLabels: [clang-format 3.3]
// Indent case labels one level from the switch statement.
// When false, use the same indentation level as for the switch statement.
// Switch statement body is always indented one level more than case labels
// (except the first block following the case label, which itself indents the
// code - unless IndentCaseBlocks is enabled).
//= false
switch (fool) {
case 1:
  bar();
  break;
default:
  plop();
}
//= true
switch (fool) {
  case 1:
    bar();
    break;
  default:
    plop();
}

//+ IndentExternBlock: [clang-format 11]
// IndentExternBlockStyle is the type of indenting of extern blocks.
//= AfterExternBlock
// Backwards compatible with AfterExternBlock’s indenting.
//  /w BraceWrapping.AfterExternBlock: true
extern "C"
{
    void foo();
}
// /w BraceWrapping.AfterExternBlock: false
extern "C" {
void foo();
}
//= NoIndent
// Does not indent extern blocks.
extern "C" {
void foo();
}
//= Indent
// Indents extern blocks.
extern "C" {
  void foo();
}

//+ IndentGotoLabels: [clang-format 10]
// Indent goto labels. When false, goto labels are flushed left.
//= false
int f() {
  if (foo()) {
label1:
    bar();
  }
label2:
  return 1;
}
//= true
int f() {
  if (foo()) {
  label1:
    bar();
  }
label2:
  return 1;
}

//+ IndentPPDirectives: [clang-format 6]
// The preprocessor directive indenting style to use.
//= None
// Does not indent any directives.
#if FOO
#if BAR
#include <foo>
#endif
#endif
//= AfterHash
// Indents directives after the hash.
#if FOO
#  if BAR
#    include <foo>
#  endif
#endif
//= BeforeHash
// Indents directives before the hash.
#if FOO
  #if BAR
    #include <foo>
  #endif
#endif

//+ IndentRequiresClause: clang-format 15]
// Indent the requires clause in a template.
// This only applies when RequiresClausePosition is OwnLine, or WithFollowing.
// In clang-format 12, 13 and 14 it was named IndentRequires.
//= false
template <typename It>
requires Iterator<It>
void sort(It begin, It end) {
  //....
}
//= true
template <typename It>
  requires Iterator<It>
void sort(It begin, It end) {
  //....
}

//+ IndentWidth: [clang-format 3.7]
// The number of columns to use for indentation.

// IndentWrappedFunctionNames: [clang-format 3.7]
// Indent if a function definition or declaration is wrapped after the type.
//= false
LoooooooooooooooooooooooooooooooooooooooongReturnType
LoooooooooooooooooooooooooooooooongFunctionDeclaration();
//= true
LoooooooooooooooooooooooooooooooooooooooongReturnType
    LoooooooooooooooooooooooooooooooongFunctionDeclaration();

//+ InsertBraces: [clang-format 15]
// Insert braces after control statements (if, else, for, do, and while) in C++
// unless the control statements are inside macro definitions or the braces
// would enclose preprocessor directives.
//= false
if (isa<FunctionDecl>(D))
  handleFunctionDecl(D);
else if (isa<VarDecl>(D))
  handleVarDecl(D);
else
  return;

while (i--)
  for (auto *A : D.attrs())
    handleAttr(A);

do
  --i;
while (i);
//= true
if (isa<FunctionDecl>(D)) {
  handleFunctionDecl(D);
} else if (isa<VarDecl>(D)) {
  handleVarDecl(D);
} else {
  return;
}

while (i--) {
  for (auto *A : D.attrs()) {
    handleAttr(A);
  }
}

do {
  --i;
} while (i);

//+ InsertTrailingCommas: [clang-format 11]
// If set to Wrapped will insert trailing commas in container literals
// (arrays and objects) that wrap across multiple lines. It is currently only
// available for JavaScript and disabled by default None.
// InsertTrailingCommas cannot be used together with BinPackArguments as
// inserting the comma disables bin-packing.
//= None
// Do not insert trailing commas.
const someArray = [
aaaaaaaaaaaaaaaaaaaaaaaaaa,
aaaaaaaaaaaaaaaaaaaaaaaaaa,
aaaaaaaaaaaaaaaaaaaaaaaaaa
]
//= Wrapped
// Insert trailing commas in container literals that were wrapped over multiple
// lines. Note that this is conceptually incompatible with bin-packing, because
// the trailing comma is used as an indicator that a container should be formatted
// one-per-line (i.e. not bin-packed). So inserting a trailing comma counteracts
// bin-packing.
const someArray = [
aaaaaaaaaaaaaaaaaaaaaaaaaa,
aaaaaaaaaaaaaaaaaaaaaaaaaa,
aaaaaaaaaaaaaaaaaaaaaaaaaa,
//                        ^ inserted
]

//+ JavaImportGroups: [clang-format 8]
// A vector of prefixes ordered by the desired groups for Java imports.
// One group’s prefix can be a subset of another - the longest prefix is always
// matched. Within a group, the imports are ordered lexicographically.
// Static imports are grouped separately and follow the same group rules.
// By default, static imports are placed before non-static imports, but this
// behavior is changed by another option, SortJavaStaticImport.

//+ JavaScriptQuotes: [clang-format 3.9]
// The JavaScriptQuoteStyle to use for JavaScript strings.
//= Leave
// Leave string quotes as they are.
string1 = "foo";
string2 = 'bar';
//= Single
//Always use single quotes.
string1 = 'foo';
string2 = 'bar';
//= Double
// Always use double quotes.
string1 = "foo";
string2 = "bar";

//+ JavaScriptWrapImports: [clang-format 3.9]
// Whether to wrap JavaScript import/export statements.
//= false
import {VeryLongImportsAreAnnoying, VeryLongImportsAreAnnoying, VeryLongImportsAreAnnoying,} from "some/module.js"
//= true
import {
    VeryLongImportsAreAnnoying,
    VeryLongImportsAreAnnoying,
    VeryLongImportsAreAnnoying,
} from 'some/module.js'

//+ KeepEmptyLinesAtTheStartOfBlocks: [clang-format 3.7]
// If true, the empty line at the start of blocks is kept.
//= false
if (foo) {
  bar();
}
//= true
if (foo) {

  bar();
}

//+ LambdaBodyIndentation: [clang-format 13]
// The indentation style of lambda bodies. Signature (the default) causes the
// lambda body to be indented one additional level relative to the indentation
// level of the signature. OuterScope forces the lambda body to be indented one
// additional level relative to the parent scope containing the lambda signature.
// For callback-heavy code, it may improve readability to have the signature indented
// two levels and to use OuterScope. The KJ style guide requires OuterScope.
//= Signature
// Align lambda body relative to the lambda signature. This is the default.
someMethod(
    [](SomeReallyLongLambdaSignatureArgument foo) {
      return;
    });
//= OuterScope
// Align lambda body relative to the indentation level of the outer scope the
// lambda signature resides in.
someMethod(
    [](SomeReallyLongLambdaSignatureArgument foo) {
  return;
});

//+ Language: [clang-format 3.5]
// Language, this format style is targeted at.
//= None - Do not use.
//= Cpp
//= CSharp
//= Java
//= JavaScript
//= Json
//= ObjC
//= Proto
//= TableGen
//= TextProto
//= Verilog

//+ MacroBlockBegin: [clang-format 3.7]
// A regular expression matching macros that start a block.

//+ MacroBlockEnd: [clang-format 3.7]
// A regular expression matching macros that end a block.

//+ MaxEmptyLinesToKeep: [clang-format 3.7]
// The maximum number of consecutive empty lines to keep.

//+ NamespaceIndentation: [clang-format 3.7]
// The indentation used for namespaces.
//= None
// Don’t indent in namespaces.
namespace out {
int i;
namespace in {
int i;
}
}
//= Inner
// Indent only in inner namespaces (nested in other namespaces).
namespace out {
int i;
namespace in {
  int i;
}
}
//= All
// Indent in all namespaces.
namespace out {
  int i;
  namespace in {
    int i;
  }
}

//+ NamespaceMacros: [clang-format 9]
// A vector of macros which are used to open namespace blocks.

//+ ObjCBinPackProtocolList: [clang-format 7]
// Controls bin-packing Objective-C protocol conformance list items into as
// few lines as possible when they go over ColumnLimit.
// If Auto (the default), delegates to the value in BinPackParameters.
// If that is true, bin-packs Objective-C protocol conformance list items into
// as few lines as possible whenever they go over ColumnLimit.
// If Always, always bin-packs Objective-C protocol conformance list items into
// as few lines as possible whenever they go over ColumnLimit.
// If Never, lays out Objective-C protocol conformance list items onto
// individual lines whenever they go over ColumnLimit.
//= Auto
// Automatically determine parameter bin-packing behavior.
//= Always
// Always bin-pack parameters.
//  Same as Auto, if BinPackParameters=true
@interface ccccccccccccc () <
    ccccccccccccc, ccccccccccccc,
    ccccccccccccc, ccccccccccccc> {
}
//= Never
// Never bin-pack parameters.
//  Same as Auto, if BinPackParameters=false
@interface ddddddddddddd () <
    ddddddddddddd,
    ddddddddddddd,
    ddddddddddddd,
    ddddddddddddd> {
}

//+ ObjCBlockIndentWidth: [clang-format 3.7]
// The number of characters to use for indentation of ObjC blocks.

//+ ObjCBreakBeforeNestedBlockParam: [clang-format 11]
// Break parameters list into lines when there is nested block parameters in a
// function call.
//= false
- (void)_aMethod
{
    [self.test1 t:self w:self callback:^(typeof(self) self, NSNumber
    *u, NSNumber *v) {
        u = c;
    }]
}
//= true
- (void)_aMethod
{
    [self.test1 t:self
                w:self
       callback:^(typeof(self) self, NSNumber *u, NSNumber *v) {
            u = c;
        }]
}

//+ ObjCSpaceAfterProperty: [clang-format 3.7]
// Add a space after @property in Objective-C
//= false
@property(readonly)
//= true
@property (readonly)

//+ ObjCSpaceBeforeProtocolList: [clang-format 3.7]
// Add a space in front of an Objective-C protocol list
//= false
Foo<Protocol>
//= true
Foo <Protocol>

//+ PPIndentWidth: [clang-format 13]
// The number of columns to use for indentation of preprocessor statements.
// When set to -1 (default) IndentWidth is used also for preprocessor statements.
//= 0
#ifdef __linux__
#define FOO
#else
#define BAR
#endif
//= 1
#ifdef __linux__
# define FOO
#else
# define BAR
#endif

//+ PackConstructorInitializers: [clang-format 14]
// The pack constructor initializers style to use.
//= Never
// Always put each constructor initializer on its own line.
Constructor()
    : a(),
      b()
//= BinPack
// Bin-pack constructor initializers.
Constructor()
    : aaaaaaaaaaaaaaaaaaaa(), bbbbbbbbbbbbbbbbbbbb(),
      cccccccccccccccccccc()
//= CurrentLine
// Put all constructor initializers on the current line if they fit.
// Otherwise, put each one on its own line.
Constructor() : a(), b()

Constructor()
    : aaaaaaaaaaaaaaaaaaaa(),
      bbbbbbbbbbbbbbbbbbbb(),
      ddddddddddddd()
//= NextLine
// Same as CurrentLine except that if all constructor initializers do not fit
// on the current line, try to fit them on the next line.
Constructor() : a(), b()

Constructor()
    : aaaaaaaaaaaaaaaaaaaa(), bbbbbbbbbbbbbbbbbbbb(), ddddddddddddd()

Constructor()
    : aaaaaaaaaaaaaaaaaaaa(),
      bbbbbbbbbbbbbbbbbbbb(),
      cccccccccccccccccccc()

//+ PenaltyBreakAssignment: [clang-format 5]
// The penalty for breaking around an assignment operator.

//+ PenaltyBreakBeforeFirstCallParameter: [clang-format 3.7]
// The penalty for breaking a function call after call(.

//+ PenaltyBreakComment: [clang-format 3.7]
// The penalty for each line break introduced inside a comment.

//+ PenaltyBreakFirstLessLess: [clang-format 3.7]
// The penalty for breaking before the first <<.

//+ PenaltyBreakOpenParenthesis: [clang-format 14]
// The penalty for breaking after (.

//+ PenaltyBreakString: [clang-format 3.7]
// The penalty for each line break introduced inside a string literal.

//+ PenaltyBreakTemplateDeclaration: [clang-format 7]
// The penalty for breaking after template declaration.

//+ PenaltyExcessCharacter: [clang-format 3.7]
// The penalty for each character outside of the column limit.

//+ PenaltyIndentedWhitespace: [clang-format 12]
// Penalty for each character of whitespace indentation
// (counted relative to leading non-whitespace column).

//+ PenaltyReturnTypeOnItsOwnLine: [clang-format 3.7]
// Penalty for putting the return type of a function onto its own line.

//+ PointerAlignment: [clang-format 3.7]
// Pointer and reference alignment style.
//= Left
// Align pointer to the left.
int* a;
//= Right
// Align pointer to the right.
int *a;
//= Middle
// Align pointer in the middle.
int * a;

//+ QualifierAlignment: [clang-format 14]
// Different ways to arrange specifiers and qualifiers (e.g. const/volatile).
// Warning: Setting QualifierAlignment to something other than Leave, COULD
// lead to incorrect code formatting due to incorrect decisions made due to
// clang-formats lack of complete semantic information. As such extra care
// should be taken to review code changes made by the use of this option.
//= Leave
// Don’t change specifiers/qualifiers to either Left or Right alignment (default).
int const a;
const int *a;
//= Left
// Change specifiers/qualifiers to be left-aligned.
const int a;
const int *a;
//= Right
// Change specifiers/qualifiers to be right-aligned.
int const a;
int const *a;
//= Custom
// Change specifiers/qualifiers to be aligned based on QualifierOrder.

//+ QualifierOrder: [clang-format 14]
// The order in which the qualifiers appear.
// Order is an array that can contain any of the following:
//  const
//  inline
//  static
//  constexpr
//  volatile
//  restrict
//  type
// Note: it MUST contain ‘type’. Items to the left of ‘type’ will be placed to
// the left of the type and aligned in the order supplied. Items to the right
// of ‘type’ will be placed to the right of the type and aligned in the order supplied.

//+ RawStringFormats: [clang-format 6]
// Defines hints for detecting supported languages code blocks in raw strings.
// A raw string with a matching delimiter or a matching enclosing function name
// will be reformatted assuming the specified language based on the style for
// that language defined in the .clang-format file. If no style has been defined
// in the .clang-format file for the specific language, a predefined style given
// by ‘BasedOnStyle’ is used. If ‘BasedOnStyle’ is not found, the formatting is
// based on llvm style. A matching delimiter takes precedence over a matching
// enclosing function name for determining the language of the raw string contents.
// If a canonical delimiter is specified, occurrences of other delimiters for
// the same language will be updated to the canonical if possible.
// There should be at most one specification per language and each delimiter and
// enclosing function should not occur in multiple specifications.

//+ ReferenceAlignment: [clang-format 13]
// Reference alignment style (overrides PointerAlignment for references).
//= Pointer
// Align reference like PointerAlignment.
//= Left
// Align reference to the left.
int& a;
//= Right
// Align reference to the right.
int &a;
//= Middle
// Align reference in the middle.
int & a;

//+ ReflowComments: [clang-format 4]
// If true, clang-format will attempt to re-flow comments.
//= false
// veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information
/* second veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of information */
//= true
// veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of
// information
/* second veryVeryVeryVeryVeryVeryVeryVeryVeryVeryVeryLongComment with plenty of
 * information */

//+ RemoveBracesLLVM: [clang-format 14]
// Remove optional braces of control statements (if, else, for, and while) in
// C++ according to the LLVM coding style.
// Warning: This option will be renamed and expanded to support other styles.
// Warning: Setting this option to true could lead to incorrect code formatting
// due to clang-format’s lack of complete semantic information. As such, extra
// care should be taken to review code changes made by this option.
//= false
if (isa<FunctionDecl>(D)) {
  handleFunctionDecl(D);
} else if (isa<VarDecl>(D)) {
  handleVarDecl(D);
}

if (isa<VarDecl>(D)) {
  for (auto *A : D.attrs()) {
    if (shouldProcessAttr(A)) {
      handleAttr(A);
    }
  }
}

if (isa<FunctionDecl>(D)) {
  for (auto *A : D.attrs()) {
    handleAttr(A);
  }
}

if (auto *D = (T)(D)) {
  if (shouldProcess(D)) {
    handleVarDecl(D);
  } else {
    markAsIgnored(D);
  }
}

if (a) {
  b();
} else {
  if (c) {
    d();
  } else {
    e();
  }
}
//= true
if (isa<FunctionDecl>(D))
  handleFunctionDecl(D);
else if (isa<VarDecl>(D))
  handleVarDecl(D);

if (isa<VarDecl>(D)) {
  for (auto *A : D.attrs())
    if (shouldProcessAttr(A))
      handleAttr(A);
}

if (isa<FunctionDecl>(D))
  for (auto *A : D.attrs())
    handleAttr(A);

if (auto *D = (T)(D)) {
  if (shouldProcess(D))
    handleVarDecl(D);
  else
    markAsIgnored(D);
}

if (a)
  b();
else if (c)
  d();
else
  e();

//+ RequiresClausePosition: [clang-format 15]
// The position of the requires clause.
//= OwnLine
// Always put the requires clause on its own line.
template <typename T>
requires C<T>
struct Foo {...

template <typename T>
requires C<T>
void bar(T t) {...

template <typename T>
void baz(T t)
requires C<T>
{...
//= WithPreceding
// Try to put the clause together with the preceding part of a declaration.
// For class templates: stick to the template declaration.
// For function templates: stick to the template declaration.
// For function declaration followed by a requires clause: stick to the parameter list.
template <typename T> requires C<T>
struct Foo {...

template <typename T> requires C<T>
void bar(T t) {...

template <typename T>
void baz(T t) requires C<T>
{...
//= WithFollowing
// Try to put the requires clause together with the class or function declaration.
template <typename T>
requires C<T> struct Foo {...

template <typename T>
requires C<T> void bar(T t) {...

template <typename T>
void baz(T t)
requires C<T> {...
//= SingleLine
// Try to put everything in the same line if possible.
// Otherwise normal line breaking rules take over.
// Fitting:
template <typename T> requires C<T> struct Foo {...

template <typename T> requires C<T> void bar(T t) {...

template <typename T> void bar(T t) requires C<T> {...

// Not fitting, one possible example:
template <typename LongName>
requires C<LongName>
struct Foo {...

template <typename LongName>
requires C<LongName>
void bar(LongName ln) {

template <typename LongName>
void bar(LongName ln)
    requires C<LongName> {

//+ SeparateDefinitionBlocks: [clang-format 14]
// Specifies the use of empty lines to separate definition blocks, including
// classes, structs, enums, and functions.
//= Leave
// Leave definition blocks as they are.
//= Always
// Insert an empty line between definition blocks.
#include <cstring>

struct Foo {
  int a, b, c;
};

namespace Ns {
class Bar {
public:
  struct Foobar {
    int a;
    int b;
  };

private:
  int t;

  int method1() {
    // ...
  }

  enum List {
    ITEM1,
    ITEM2
  };

  template<typename T>
  int method2(T x) {
    // ...
  }

  int i, j, k;

  int method3(int par) {
    // ...
  }
};

class C {};
}
//= Never
// Remove any empty line between definition blocks.
#include <cstring>
struct Foo {
  int a, b, c;
};
namespace Ns {
class Bar {
public:
  struct Foobar {
    int a;
    int b;
  };
private:
  int t;
  int method1() {
    // ...
  }
  enum List {
    ITEM1,
    ITEM2
  };
  template<typename T>
  int method2(T x) {
    // ...
  }
  int i, j, k;
  int method3(int par) {
    // ...
  }
};
class C {};
}


//+ ShortNamespaceLines: [clang-format 13]
// The maximal number of unwrapped lines that a short namespace spans. Defaults to 1.
// This determines the maximum length of short namespaces by counting unwrapped
// lines (i.e. containing neither opening nor closing namespace brace) and makes
// “FixNamespaceComments” omit adding end comments for those.
//= 0
namespace a {
  int foo;
} // namespace a

namespace b {
  int foo;
  int bar;
} // namespace b
//= 1
namespace a {
  int foo;
}

namespace b {
  int foo;
  int bar;
} // namespace b

//+ SortIncludes: [clang-format 4]
// Controls if and how clang-format will sort #includes.
// If Never, includes are never sorted.
// If CaseInsensitive, includes are sorted in an ASCIIbetical or
// case insensitive fashion.
// If CaseSensitive, includes are sorted in an alphabetical or case sensitive fashion.
//= Never
// Includes are never sorted.
#include "B/A.h"
#include "A/B.h"
#include "a/b.h"
#include "A/b.h"
#include "B/a.h"
//= CaseSensitive
// Includes are sorted in an ASCIIbetical or case sensitive fashion.
#include "A/B.h"
#include "A/b.h"
#include "B/A.h"
#include "B/a.h"
#include "a/b.h"
//= CaseInsensitive
// Includes are sorted in an alphabetical or case insensitive fashion.
#include "A/B.h"
#include "A/b.h"
#include "a/b.h"
#include "B/A.h"
#include "B/a.h"

//+ SortJavaStaticImport: [clang-format 12]
// When sorting Java imports, by default static imports are placed before
// non-static imports. If JavaStaticImportAfterImport is After, static imports
// are placed after non-static imports.
//= Before
// Static imports are placed before non-static imports.
import static org.example.function1;

import org.example.ClassA;
//= After
// Static imports are placed after non-static imports.
import org.example.ClassA;

import static org.example.function1;

//+ SortUsingDeclarations: [clang-format 5]
// If true, clang-format will sort using declarations.
// The order of using declarations is defined as follows:
// Split the strings by “::” and discard any initial empty strings. The last
// element of each list is a non-namespace name; all others are namespace names.
// Sort the lists of names lexicographically, where the sort order of individual
// names is that all non-namespace names come before all namespace names, and
// within those groups, names are in case-insensitive lexicographic order.
//= false
using std::cout;
using std::cin;
//= true
using std::cin;
using std::cout;

//+ SpaceAfterCStyleCast: [clang-format 3.5]
// If true, a space is inserted after C style casts.
//= false
(int)i;
//= true
(int) i;

//+ SpaceAfterLogicalNot: [clang-format 9]
// If true, a space is inserted after the logical not operator (!).
//= false
!someExpression();
//= true
! someExpression();

//+ SpaceAfterTemplateKeyword: [clang-format 4]
// If true, a space will be inserted after the ‘template’ keyword.
//= false
template<int> void foo();
//= true
template <int> void foo();

//+ SpaceAroundPointerQualifiers: [clang-format 12]
// Defines in which cases to put a space before or after pointer qualifiers
//= Default
// Don’t ensure spaces around pointer qualifiers and use PointerAlignment instead.
// /w PointerAlignment: Left
void* const* x = NULL;
// /w PointerAlignment: Right
void *const *x = NULL;
//= Before
// /w PointerAlignment: Left
void* const* x = NULL;
// /w PointerAlignment: Right
void * const *x = NULL;
//= After
// Ensure that there is a space after pointer qualifiers.
// /w PointerAlignment: Left
void* const * x = NULL;
// /w PointerAlignment: Right
void *const *x = NULL;
//= Both
// Ensure that there is a space both before and after pointer qualifiers.
void* const * x = NULL;
// /w PointerAlignment: Right
void * const *x = NULL;

//+ SpaceBeforeAssignmentOperators: [clang-format 3.7]
// If false, spaces will be removed before assignment operators.
//= false
int a= 5;
a+= 42;
//= true
int a = 5;
a += 42;

//+ SpaceBeforeCaseColon: [clang-format 12]
// If false, spaces will be removed before case colon.
//= false
switch (x) {
  case 1: break;
}
//= true
switch (x) {
  case 1 : break;
}

//+ SpaceBeforeCpp11BracedList: [clang-format 7]
// If true, a space will be inserted before a C++11 braced list used to
// initialize an object (after the preceding identifier or type).
//= false
Foo foo{ bar };
Foo{};
vector<int>{ 1, 2, 3 };
new int[3]{ 1, 2, 3 };
//= true
Foo foo { bar };
Foo {};
vector<int> { 1, 2, 3 };
new int[3] { 1, 2, 3 };

//+ SpaceBeforeCtorInitializerColon: [clang-format 7]
// If false, spaces will be removed before constructor initializer colon.
//= false
Foo::Foo(): a(a) {}
//= true
Foo::Foo() : a(a) {}

//+ SpaceBeforeInheritanceColon: [clang-format 7]
// If false, spaces will be removed before inheritance colon.
//= false
class Foo: Bar {}
//= true
class Foo : Bar {}

//+ SpaceBeforeParens: [clang-format 3.5]
// Defines in which cases to put a space before opening parentheses.
//= Never
// Never put a space before opening parentheses.
void f() {
  if(true) {
    f();
  }
}
//= ControlStatements
// Put a space before opening parentheses only after control statement keywords
// (for/if/while...).
void f() {
  if (true) {
    f();
  }
}
//= ControlStatementsExceptControlMacros
// Same as ControlStatements except this option doesn’t apply to ForEach and
// If macros. This is useful in projects where ForEach/If macros are treated
// as function calls instead of control statements.
// ControlStatementsExceptForEachMacros remains an alias for backward compatibility.
void f() {
  Q_FOREACH(...) {
    f();
  }
}
//= NonEmptyParentheses
// Put a space before opening parentheses only if the parentheses are not empty i.e. ‘()’
void() {
  if (true) {
    f();
    g (x, y, z);
  }
}
//= Always
// Always put a space before opening parentheses, except when it’s prohibited by
// the syntax rules (in function-like macro definitions) or when determined by
// other style rules (after unary operators, opening parentheses, etc.)
void f () {
  if (true) {
    f ();
  }
}
//= Custom
// Configure each individual space before parentheses in SpaceBeforeParensOptions.

//+ SpaceBeforeParensOptions: [clang-format 14]
// Control of individual space before parentheses.
// If SpaceBeforeParens is set to Custom, use this to specify how each individual
// space before parentheses case should be handled. Otherwise, this is ignored.
//++ AfterControlStatements:
// If true, put space betwee control statement keywords (for/if/while…) and
// opening parentheses.
//= false
if(...) {}
//= true
if (...) {}
//++ AfterForeachMacros:
// If true, put space between foreach macros and opening parentheses.
//= false
FOREACH(...)
  <loop-body>
//= true
FOREACH (...)
  <loop-body>
//++ AfterFunctionDeclarationName:
// If true, put a space between function declaration name and opening parentheses.
//= false
void f();
//= true
void f ();
//++ AfterFunctionDefinitionName:
// If true, put a space between function definition name and opening parentheses.
//= false
void f() {}
//= true
void f () {}
//++ AfterIfMacros:
// If true, put space between if macros and opening parentheses.
//= false
IF(...)
  <conditional-body>
//= true
IF (...)
  <conditional-body>
//++ AfterOverloadedOperator:
// If true, put a space between operator overloading and opening parentheses.
//= false
void operator++(int a);
object.operator++(10);
//= true
void operator++ (int a);
object.operator++ (10);
//++ AfterRequiresInClause:
// If true, put space between requires keyword in a requires clause and opening
// parentheses, if there is one.
//= false
template<typename T>
requires(A<T> && B<T>)
...
//= true
template<typename T>
requires (A<T> && B<T>)
...
//++ AfterRequiresInExpression:
// If true, put space between requires keyword in a requires expression and
// opening parentheses.
//= false
template<typename T>
concept C = requires(T t) {
              ...
            }
//= true
template<typename T>
concept C = requires (T t) {
              ...
            }
//++ BeforeNonEmptyParentheses:
// If true, put a space before opening parentheses only if the parentheses are
// not empty.
//= false
void f();
f();
//= true
void f (int a);
f (a);

//+ SpaceBeforeRangeBasedForLoopColon: [clang-format 7]
// If false, spaces will be removed before range-based for loop colon.
//= false
for(auto v: values) {}
//= true
for (auto v : values) {}

//+ SpaceBeforeSquareBrackets: [clang-format 10]
// If true, spaces will be before [. Lambdas will not be affected.
// Only the first [ will get a space added.
//= false
int a[5];
int a[5][5];
//= true
int a [5];
int a [5][5];

//+ SpaceInEmptyBlock: [clang-format 10]
// If true, spaces will be inserted into {}.
//= false
void f() {}
while (true) {}
//= true
void f() { }
while (true) { }

//+ SpaceInEmptyParentheses: [clang-format 3.7]
// If true, spaces may be inserted into ().
//= false
void f() {
  int x[] = {foo(), bar()};
  if (true) {
    f();
  }
}
//= true
void f( ) {
  int x[] = {foo( ), bar( )};
  if (true) {
    f( );
  }
}

//+ SpacesBeforeTrailingComments: [clang-format 3.7]
// The number of spaces before trailing line comments (// - comments).
// This does not affect trailing block comments (/* - comments) as those
// commonly have different usage patterns and a number of special cases.

//+ SpacesInAngles: [clang-format 3.4]
// The SpacesInAnglesStyle to use for template argument lists.
//= Never
// Remove spaces after < and before >.
static_cast<int>(arg);
std::function<void(int)> fct;
//= Always
// Add spaces after < and before >.
static_cast< int >(arg);
std::function< void(int) > fct;
//= Leave
// Keep a single space after < and before > if any spaces were present.
// Option Standard: Cpp03 takes precedence.

//+ SpacesInCStyleCastParentheses: [clang-format 3.7]
// If true, spaces may be inserted into C style casts.
//= false
x = (int32)y
//= true
x = ( int32 )y

//+ SpacesInConditionalStatement: [clang-format 10]
// If true, spaces will be inserted around if/for/switch/while conditions.
//= false
if (a) { ... }
while (i < 5) { ... }
//= true
if ( a )  { ... }
while ( i < 5 )  { ... }

//+ SpacesInContainerLiterals: [clang-format 3.7]
// If true, spaces are inserted inside container literals
// (e.g. ObjC and Javascript array and dict literals).
//= false
var arr = [1, 2, 3];
f({a: 1, b: 2, c: 3});
//= true
var arr = [ 1, 2, 3 ];
f({a : 1, b : 2, c : 3});

//+ SpacesInLineCommentPrefix: [clang-format 13]
// How many spaces are allowed at the start of a line comment.
// To disable the maximum set it to -1, apart from that the maximum
// takes precedence over the minimum.
// /w Minimum = 1 and Maximum = -1:
// One space is forced

//+ SpacesInParentheses: [clang-format 3.7]
// If true, spaces will be inserted after ( and before ).
//= false
t f(Deleted &) & = delete;
//= true
t f( Deleted & ) & = delete;

//+ SpacesInSquareBrackets: [clang-format 3.7]
// If true, spaces will be inserted after [ and before ]. Lambdas without
// arguments or unspecified size array declarations will not be affected.
//= false
int a[5];
//= true
int a[ 5 ];
std::unique_ptr<int[]> foo() {} // Won't be affected

//+ Standard: [clang-format 3.7]
// Parse and format C++ constructs compatible with this standard.
//= Auto
// Automatic detection based on the input.
//= Latest
// Parse and format using the latest supported language version.
// Cpp11 is a deprecated alias for Latest
//= c++03
//= c++11
//= c++14
//= c++17
//= c++20

//+ StatementAttributeLikeMacros: [clang-format 12]
// Macros which are ignored in front of a statement, as if they were an attribute.
// So that they are not parsed as identifier, for example for Qts emit.

//+ StatementMacros: [clang-format 8]
// A vector of macros that should be interpreted as complete statements.
// Typical macros are expressions, and require a semi-colon to be added;
// sometimes this is not the case, and this allows to make clang-format aware of
// such cases. For example: Q_UNUSED

//+ TabWidth: [clang-format 3.7]
// The number of columns used for tab stops.

//+ TypenameMacros: [clang-format 9]
// A vector of macros that should be interpreted as type declarations instead
// of as function calls.
// These are expected to be macros of the form: STACK_OF(...)

//+ UseCRLF: [clang-format 10]
// Use \r\n instead of \n for line breaks. Also used as fallback if DeriveLineEnding is true.

//+ UseTab: [clang-format 3.7]
// The way to use tab characters in the resulting file.
//= Never
// Never use tab.
//= ForIndentation
// Use tabs only for indentation.
//= ForContinuationAndIndentation
// Fill all leading whitespace with tabs, and use spaces for alignment that
// appears within a line (e.g. consecutive assignments and declarations).
//= AlignWithSpaces
// Use tabs for line continuation and indentation, and spaces for alignment.
//= Always
// Use tabs whenever we need to fill whitespace that spans at least from one
// tab stop to the next one.

//+ WhitespaceSensitiveMacros: [clang-format 11]
// A vector of macros which are whitespace-sensitive and should not be touched.
// These are expected to be macros of the form: STRINGIZE(...)
