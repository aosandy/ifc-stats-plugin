/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcResourceLevelRelationship.h"
class IFCQUERY_EXPORT IfcMaterial;
class IFCQUERY_EXPORT IfcLabel;
//ENTITY
class IFCQUERY_EXPORT IfcMaterialRelationship : public IfcResourceLevelRelationship
{ 
public:
	IfcMaterialRelationship() = default;
	IfcMaterialRelationship( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcMaterialRelationship"; }
	virtual const std::wstring toString() const;


	// IfcResourceLevelRelationship -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>					m_Name;						//optional
	//  shared_ptr<IfcText>						m_Description;				//optional

	// IfcMaterialRelationship -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcMaterial>					m_RelatingMaterial;
	std::vector<shared_ptr<IfcMaterial> >	m_RelatedMaterials;
	shared_ptr<IfcLabel>					m_Expression;				//optional
};
