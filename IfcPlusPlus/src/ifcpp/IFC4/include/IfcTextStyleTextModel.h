/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPresentationItem.h"
class IFCQUERY_EXPORT IfcSizeSelect;
class IFCQUERY_EXPORT IfcTextAlignment;
class IFCQUERY_EXPORT IfcTextDecoration;
class IFCQUERY_EXPORT IfcTextTransformation;
//ENTITY
class IFCQUERY_EXPORT IfcTextStyleTextModel : public IfcPresentationItem
{ 
public:
	IfcTextStyleTextModel() = default;
	IfcTextStyleTextModel( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcTextStyleTextModel"; }
	virtual const std::wstring toString() const;


	// IfcPresentationItem -----------------------------------------------------------

	// IfcTextStyleTextModel -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcSizeSelect>			m_TextIndent;				//optional
	shared_ptr<IfcTextAlignment>		m_TextAlign;				//optional
	shared_ptr<IfcTextDecoration>		m_TextDecoration;			//optional
	shared_ptr<IfcSizeSelect>			m_LetterSpacing;			//optional
	shared_ptr<IfcSizeSelect>			m_WordSpacing;				//optional
	shared_ptr<IfcTextTransformation>	m_TextTransform;			//optional
	shared_ptr<IfcSizeSelect>			m_LineHeight;				//optional
};
