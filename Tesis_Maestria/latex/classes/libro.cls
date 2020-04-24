%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Libro                                    %
% Version 2.0 by Antonio Ayala Barbosa %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Definición de la clase para el libro %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\ProvidesClass{latex/classes/libro}[2016/12/21 v1 libro class]

\DeclareOption*{\PassOptionsToClass{\CurrentOption}{book}}
\ProcessOptions\relax
\ifx\pdfoutput\undefined
   \LoadClass[dvips, letterpaper]{book}
\else
   \LoadClass[letterpaper]{book}
\fi



%%%%%%%%%%%%%%%%%%%%%%%%
% Paquetes utilizados. %
%%%%%%%%%%%%%%%%%%%%%%%%
\usepackage[spanish,mexico,activeacute]{babel} % Soporte multilenguaje y locales.
\usepackage[utf8]{inputenc} % Soporte para el ingreso de caracteres en UTF8
\usepackage[T1]{fontenc} % El tipo de codificación para la fuente
\usepackage[usenames, dvipsnames]{color} % Soporte de colores
\usepackage{color,soulutf8}
\usepackage{titlesec} % Headings alternativos
\usepackage{fancyhdr} % Headings
\usepackage{setspace}
\usepackage{titlesec}
\usepackage{amssymb,amsmath,amsfonts,amsthm}
\usepackage[hmarginratio=5:4]{geometry}
\usepackage{graphicx}
\usepackage{url} 
\usepackage[margin=10pt,font=small,labelfont=bf]{caption}
\usepackage{minitoc}
\usepackage[intoc,spanish]{nomencl}
\usepackage{quotchap}
\usepackage{titlesec}
\usepackage{fancybox}
\usepackage{enumitem}
\usepackage{rotating}
\usepackage{tikz}
\usepackage{array}
\usepackage{wrapfig}
\usepackage{multirow}
\usepackage{tabularx}
\usepackage[acronym, toc]{glossaries}
\usepackage{float}{\normalsize }

\usepackage{graphicx}
\usepackage{pdfpages}
\usepackage{color}
\usepackage{epsfig}
\usepackage{multirow}
\usepackage{colortbl}
\usepackage{listings}
\usepackage[utf8]{inputenc}
\usepackage{listingsutf8}
\usepackage[spanish]{babel}
%\usepackage{paralist}
\usepackage[acronym]{glossaries}
%\usepackage[table]{xcolor}


\definecolor{lightgray}{gray}{0.9}
\definecolor{orange}{RGB}{145,204,243}
\definecolor{orange1}{RGB}{54,132,182}
\definecolor{titulo}{gray}{0.75}
\definecolor{gray97}{gray}{.97}
\definecolor{gray75}{gray}{.75}
\definecolor{gray45}{gray}{.45}
\definecolor{advertencia}{RGB}{255,178,102}
\definecolor{mintedbackground}{rgb}{0.95,0.95,0.95}
\definecolor{lbcolor}{rgb}{0.95,0.95,0.95}
\definecolor{mintedframe}{rgb}{0.0,0.0,0.0}

\lstset{
    inputencoding = utf8,  % Input encoding
    extendedchars = true,  % Extended ASCII
    texcl         = true,  % Activate LaTeX commands in comments
    mathescape    = true   % Mathematical expressions between $
    captionpos    = b,     % Caption position
    literate      =        % Support additional characters
      {á}{{\'a}}1  {é}{{\'e}}1  {í}{{\'i}}1 {ó}{{\'o}}1  {ú}{{\'u}}1
      {Á}{{\'A}}1  {É}{{\'E}}1  {Í}{{\'I}}1 {Ó}{{\'O}}1  {Ú}{{\'U}}1
      {à}{{\`a}}1  {è}{{\`e}}1  {ì}{{\`i}}1 {ò}{{\`o}}1  {ù}{{\`u}}1
      {À}{{\`A}}1  {È}{{\'E}}1  {Ì}{{\`I}}1 {Ò}{{\`O}}1  {Ù}{{\`U}}1
      {ä}{{\"a}}1  {ë}{{\"e}}1  {ï}{{\"i}}1 {ö}{{\"o}}1  {ü}{{\"u}}1
      {Ä}{{\"A}}1  {Ë}{{\"E}}1  {Ï}{{\"I}}1 {Ö}{{\"O}}1  {Ü}{{\"U}}1
      {â}{{\^a}}1  {ê}{{\^e}}1  {î}{{\^i}}1 {ô}{{\^o}}1  {û}{{\^u}}1
      {Â}{{\^A}}1  {Ê}{{\^E}}1  {Î}{{\^I}}1 {Ô}{{\^O}}1  {Û}{{\^U}}1
      {œ}{{\oe}}1  {Œ}{{\OE}}1  {æ}{{\ae}}1 {Æ}{{\AE}}1  {ß}{{\ss}}1
      {ç}{{\c c}}1 {Ç}{{\c C}}1 {ø}{{\o}}1  {å}{{\r a}}1 {Å}{{\r A}}1
      {ñ}{{\~n}}1  {Ñ}{{\~N}}1  {¿}{{?`}}1  {¡}{{!`}}1
      % ¿ and ¡ are not correctly displayed if inconsolata font is used
      % together with the lstlisting environment. Consider typing code in
      % external files and using \lstinputlisting to display them instead.      
  }
\lstset{
	frame=Ltb,
	tabsize=2,
	framerule=0pt,
	aboveskip=0.5cm,
	framextopmargin=0pt,
	framexbottommargin=0pt,
	framexleftmargin=0.4cm,
	framesep=0pt,
	rulesep=.0pt,
	backgroundcolor=\color{gray97},
	rulesepcolor=\color{blue},
	stringstyle=\ttfamily,
	showstringspaces = false,
	basicstyle=\small\ttfamily,
	commentstyle=\color{gray45},
	keywordstyle=\bfseries,
	%
	numbers=left,
	numbersep=15pt,
	numberstyle=\tiny,
	numberfirstline = false,
	breaklines=true,
}
 
\lstdefinestyle{consola}{
	basicstyle=\footnotesize\bf\ttfamily,
	backgroundcolor=\color{gray75},
}	
\definecolor{gray}{rgb}{0.4,0.4,0.4}
\definecolor{darkblue}{rgb}{0.0,0.0,0.6}
\definecolor{cyan}{rgb}{0.0,0.6,0.6}
\definecolor{mGreen}{rgb}{0,0.6,0}
\definecolor{mGray}{rgb}{0.5,0.5,0.5}
\definecolor{mPurple}{rgb}{0.58,0,0.82}
\definecolor{backgroundColour}{rgb}{0.95,0.95,0.92}

\lstdefinelanguage{XML}{
	morestring=[b]",
	tabsize=2,
	breaklines=true,
	morestring=[s]{>}{<},
	morecomment=[s]{<?}{?>},
	stringstyle=\color{black},
	identifierstyle=\color{darkblue},
	keywordstyle=\color{cyan},
	numbers=none,
	morekeywords={xmlns,version,type}% list your attributes here
}
\lstdefinestyle{CStyle}{
    backgroundcolor=\color{backgroundColour},   
    commentstyle=\color{mGreen},
    keywordstyle=\color{magenta},
    numberstyle=\tiny\color{mGray},
    stringstyle=\color{mPurple},
    basicstyle=\footnotesize,
    breakatwhitespace=false,         
    breaklines=true,                 
    captionpos=b,                    
    keepspaces=true,                 
    numbers=left,                    
    numbersep=5pt,                  
    showspaces=false,                
    showstringspaces=false,
    showtabs=false,                  
    tabsize=2,
    language=C
}

\lstdefinestyle{XML}{language=XML}
\definecolor{codebg}{rgb}{0.96,0.96,0.96}
\definecolor{colorurls}{RGB}{107,17,17}
\definecolor{colorsql}{RGB}{255,245,245}
\definecolor{colorreferences}{RGB}{48,134,3}
\definecolor{titulo}{gray}{0.65}

\makeglossaries
\setglossarystyle{altlistgroup}

%%%%%%%%%%%%%%%%%%%%%%%%%%
% Configuraciones varias %
%%%%%%%%%%%%%%%%%%%%%%%%%%
\pagestyle{fancy}
\renewcommand{\chaptermark}[1]{\markboth{\MakeUppercase{\thechapter. #1 }}{}}
\renewcommand{\sectionmark}[1]{\markright{\thesection\ #1}}
\fancyhf{}
\fancyhead[RO]{\bfseries\rightmark}
\fancyhead[LE]{\bfseries\leftmark}
\fancyfoot[RO,LE]{\thepage}
\renewcommand{\headrulewidth}{0.5pt}
\renewcommand{\footrulewidth}{0pt}
\addtolength{\headheight}{52pt}
\fancypagestyle{plain}{
  \fancyhead{}
  \renewcommand{\headrulewidth}{0pt}
}

\titleclass{\subsubsubsection}{straight}[\subsection]
\newcounter{subsubsubsection}[subsubsection]
\renewcommand\thesubsubsubsection{\thesubsubsection.\arabic{subsubsubsection}}
\renewcommand\theparagraph{\thesubsubsubsection.\arabic{paragraph}} % optional; useful if paragraphs are to be numbered

\titleformat{\subsubsubsection}
  {\normalfont\normalsize\bfseries}{\thesubsubsubsection}{1em}{}
\titlespacing*{\subsubsubsection}
{0pt}{3.25ex plus 1ex minus .2ex}{1.5ex plus .2ex}

\makeatletter
\renewcommand\paragraph{\@startsection{paragraph}{5}{\z@}%
  {3.25ex \@plus1ex \@minus.2ex}%
  {-1em}%
  {\normalfont\normalsize\bfseries}}
\renewcommand\subparagraph{\@startsection{subparagraph}{6}{\parindent}%
  {3.25ex \@plus1ex \@minus .2ex}%
  {-1em}%
  {\normalfont\normalsize\bfseries}}
\def\toclevel@subsubsubsection{4}
\def\toclevel@paragraph{5}
\def\toclevel@paragraph{6}
\def\l@subsubsubsection{\@dottedtocline{4}{7em}{4em}}
\def\l@paragraph{\@dottedtocline{5}{10em}{5em}}
\def\l@subparagraph{\@dottedtocline{6}{14em}{6em}}

\setcounter{secnumdepth}{4}
\setcounter{tocdepth}{3}

%%%%%%%%%%%%%%%
% Frontmatter %
%%%%%%%%%%%%%%%

\newenvironment{alwayssingle}{
  \@restonecolfalse\if@twocolumn\@restonecoltrue\onecolumn
  \else\newpage\fi}
{\if@restonecol\twocolumn\else\newpage\fi}

% Entorno para el prefacio de un libro

\newenvironment{prefacio} {
    \begin{alwayssingle}
    \pagestyle{empty}
    \cleardoublepage
    \begin{center}
      \vspace*{1.5cm}
      {\Large \bfseries Prefacio}
    \end{center}
    \vspace*{0.5cm}
    \begin{quote}}
{\end{quote}\end{alwayssingle}}

% Agradecimientos del libro

\newenvironment{agradecimiento} {
  \begin{alwayssingle}
  \end{alwayssingle}
  \pagestyle{empty}
  \begin{alwayssingle}
    \cleardoublepage{}
    \begin{center}
      \vspace*{1.5cm}
      {\Large \bfseries Agradecimientos}
    \end{center}
    \vspace{0.5cm}
    \begin{quote}}
{\end{quote}\end{alwayssingle}}

% Estilo del frontmatter

\renewcommand{\frontmatter} {
  \cleardoublepage{}
  \pagestyle{fancy}
  \pagenumbering{roman}
  \titleformat{\chapter}[display]%
  {\filleft}%
  {\color{Gray}{\filleft\small{\bfseries CAPÍTULO}} {\linebreak\fontsize{90}{90}\selectfont\selectfont {\bfseries \thechapter}}}
  {2ex}
  {\vspace{2ex}\bfseries \fontsize{30}{30}\selectfont}%
  \titlespacing{\chapter}{3mm}{*10}{15mm}[3mm] %
  \titleformat{\section}[block]{\normalfont\Large}{\thesection}{.5em}{\bfseries}
  \titlespacing*{\section}{0pt}{*4}{*1}
  \titleformat{\subsection}[block]{\normalfont\large}{\thesubsection}{.5em}{\bfseries}
  \titlespacing*{\subsection}{0pt}{*4}{*1}
  \titleformat{\subsubsection}[block]{\normalfont\normalsize}{\thesubsubsection}{.5em}{\bfseries}
  \titlespacing*{\subsubsection}{0pt}{*4}{0.5ex}
}


\renewcommand{\mainmatter}{
  \cleardoublepage{}
  \pagestyle{fancy}
  \pagenumbering{arabic}
  \titleformat{\chapter}[display]
  {\filleft}
  {\color{Gray}{\filleft\small{\bfseries CAPÍTULO}} {\linebreak\fontsize{90}{90}\selectfont\selectfont {\bfseries \thechapter}}}
  {2ex}
  {\vspace{2ex}\bfseries \fontsize{30}{30}\selectfont}%

  \titlespacing{\chapter}{3mm}{*10}{15mm}[3mm] %
  \titleformat{\section}[block]{\normalfont\Large}{\thesection}{.5em}{\bfseries}
  \titlespacing*{\section}{0pt}{*4}{*1}
  \titleformat{\subsection}[block]{\normalfont\large}{\thesubsection}{.5em}{\bfseries}
  \titlespacing*{\subsection}{0pt}{*4}{*1}
  \titleformat{\subsubsection}[block]{\normalfont\normalsize}{\thesubsubsection}{.5em}{\bfseries}
  \titlespacing*{\subsubsection}{0pt}{*4}{0.5ex}
}

\renewcommand{\backmatter}{%
  \cleardoublepage{}
  \pagestyle{fancy}

  \titleformat{\chapter}[display]%
  {\filleft}%
  {\color{Gray}{\filleft\small{\bfseries APÉNDICE}} {\linebreak\fontsize{90}{90}\selectfont\selectfont {\bfseries \thechapter}}}
  {2ex}
  {\vspace{2ex}\bfseries \fontsize{30}{30}\selectfont}%
  \titlespacing{\chapter}{3mm}{*10}{15mm}[3mm] %

  \titleformat{\section}[block]{\normalfont\Large}{\thesection}{.5em}{\bfseries}
  \titlespacing*{\section}{0pt}{*4}{*1}

  \titleformat{\subsection}[block]{\normalfont\large}{\thesubsection}{.5em}{\bfseries}
  \titlespacing*{\subsection}{0pt}{*4}{*1}

  \titleformat{\subsubsection}[block]{\normalfont\normalsize}{\thesubsubsection}{.5em}{\bfseries}
  \titlespacing*{\subsubsection}{0pt}{*4}{0.5ex}
}

% Números de páginas: Romanos + arábigos

\newenvironment{romanpages}
{
	\setcounter{page}{1}
	\renewcommand{\thepage}{\roman{page}}
}

{
	\newpage
	\renewcommand{\thepage}{\arabic{page}}
	\setcounter{page}{1}
}


\newtheorem{definition}{Definición}[chapter]
\newtheorem{theorem}{Teorema}[chapter]
\renewcommand\qedsymbol{$\blacksquare$}

\newenvironment{changemargin}[2]{%
  \begin{list}{}{%
      \setlength{\topsep}{0pt}%
      \setlength{\leftmargin}{#1}%
      \setlength{\rightmargin}{#2}%
      \setlength{\listparindent}{\parindent}%
      \setlength{\itemindent}{\parindent}%
      \setlength{\parsep}{\parskip}%
    }%
  \item[]}
  {\end{list}
}
%Lista de Algoritmos
\renewcommand{\lstlistingname}{Algoritmo}% Listing -> Algorithm
\renewcommand{\lstlistlistingname}{Índice de \lstlistingname s}% List of Listings -> List of Algorithms
