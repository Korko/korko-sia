#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=
CCC=
CXX=
FC=
AS=

# Macros
CND_PLATFORM=None-Windows
CND_CONF=Release
CND_DISTDIR=dist

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/intersection.o \
	${OBJECTDIR}/objet.o \
	${OBJECTDIR}/image.o \
	${OBJECTDIR}/rayon.o \
	${OBJECTDIR}/point.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/vecteur.o \
	${OBJECTDIR}/repere.o \
	${OBJECTDIR}/sphere.o \
	${OBJECTDIR}/couleur.o \
	${OBJECTDIR}/scene.o \
	${OBJECTDIR}/matrice.o \
	${OBJECTDIR}/plan.o \
	${OBJECTDIR}/observateur.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-Release.mk dist/Release/None-Windows/raytracer.exe

dist/Release/None-Windows/raytracer.exe: ${OBJECTFILES}
	${MKDIR} -p dist/Release/None-Windows
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/raytracer ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/intersection.o: nbproject/Makefile-${CND_CONF}.mk intersection.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/intersection.o intersection.cpp

${OBJECTDIR}/objet.o: nbproject/Makefile-${CND_CONF}.mk objet.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/objet.o objet.cpp

${OBJECTDIR}/image.o: nbproject/Makefile-${CND_CONF}.mk image.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/image.o image.cpp

${OBJECTDIR}/rayon.o: nbproject/Makefile-${CND_CONF}.mk rayon.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/rayon.o rayon.cpp

${OBJECTDIR}/point.o: nbproject/Makefile-${CND_CONF}.mk point.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/point.o point.cpp

${OBJECTDIR}/main.o: nbproject/Makefile-${CND_CONF}.mk main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/vecteur.o: nbproject/Makefile-${CND_CONF}.mk vecteur.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/vecteur.o vecteur.cpp

${OBJECTDIR}/repere.o: nbproject/Makefile-${CND_CONF}.mk repere.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/repere.o repere.cpp

${OBJECTDIR}/sphere.o: nbproject/Makefile-${CND_CONF}.mk sphere.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/sphere.o sphere.cpp

${OBJECTDIR}/couleur.o: nbproject/Makefile-${CND_CONF}.mk couleur.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/couleur.o couleur.cpp

${OBJECTDIR}/scene.o: nbproject/Makefile-${CND_CONF}.mk scene.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/scene.o scene.cpp

${OBJECTDIR}/matrice.o: nbproject/Makefile-${CND_CONF}.mk matrice.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/matrice.o matrice.cpp

${OBJECTDIR}/plan.o: nbproject/Makefile-${CND_CONF}.mk plan.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/plan.o plan.cpp

${OBJECTDIR}/observateur.o: nbproject/Makefile-${CND_CONF}.mk observateur.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/observateur.o observateur.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Release
	${RM} dist/Release/None-Windows/raytracer.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
