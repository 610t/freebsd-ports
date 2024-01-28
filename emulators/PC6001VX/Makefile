PORTNAME=	PC6001VX
PORTVERSION=	4.2.5
DISTVERSIONPREFIX=	v
CATEGORIES=	emulators

MAINTAINER=	takeshi.mutoh@gmail.com
COMMENT=	PC6001VX emulator for NEC PC-6001
WWW=		https://github.com/eighttails/PC6001VX

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		pkgconfig
USE_QT_VER=	6
USE_QT=		core gui multimedia qmake:build

USE_GITHUB=	yes
GH_ACCOUNT=	eighttails

do-configure:
	cd ${WRKSRC} && qmake6 -o Makefile PC6001VX.pro

.include <bsd.port.mk>
