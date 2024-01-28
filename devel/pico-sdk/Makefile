PORTNAME=	pico-sdk
PORTVERSION=	1.5.1
CATEGORIES=	devel

MAINTAINER=	takeshi.mutoh@gmail.com
COMMENT=	SDK for Raspberry Pi Pico
WWW=		https://github.com/raspberrypi/pico-sdk/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

BUILD_DEPENDS=  ${PREFIX}/gcc-arm-embedded/bin/arm-none-eabi-gcc:devel/gcc-arm-embedded

USES=		cmake
CMAKE_ARGS+=	-DPICO_TOOLCHAIN_PATH=${PREFIX}/gcc-arm-embedded/bin/

USE_GITHUB=	yes
GH_ACCOUNT=	raspberrypi

.include <bsd.port.mk>
