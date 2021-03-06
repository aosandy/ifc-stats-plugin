/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcColour.h"
#include "ifcpp/IFC4/include/IfcCurveFontOrScaledCurveFontSelect.h"
#include "ifcpp/IFC4/include/IfcCurveStyle.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcSizeSelect.h"

// ENTITY IfcCurveStyle 
IfcCurveStyle::IfcCurveStyle( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcCurveStyle::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCurveStyle> copy_self( new IfcCurveStyle() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_CurveFont ) { copy_self->m_CurveFont = dynamic_pointer_cast<IfcCurveFontOrScaledCurveFontSelect>( m_CurveFont->getDeepCopy(options) ); }
	if( m_CurveWidth ) { copy_self->m_CurveWidth = dynamic_pointer_cast<IfcSizeSelect>( m_CurveWidth->getDeepCopy(options) ); }
	if( m_CurveColour ) { copy_self->m_CurveColour = dynamic_pointer_cast<IfcColour>( m_CurveColour->getDeepCopy(options) ); }
	if( m_ModelOrDraughting ) { copy_self->m_ModelOrDraughting = dynamic_pointer_cast<IfcBoolean>( m_ModelOrDraughting->getDeepCopy(options) ); }
	return copy_self;
}
void IfcCurveStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCURVESTYLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_CurveFont ) { m_CurveFont->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_CurveWidth ) { m_CurveWidth->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_CurveColour ) { m_CurveColour->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_ModelOrDraughting ) { m_ModelOrDraughting->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcCurveStyle::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCurveStyle::toString() const { return L"IfcCurveStyle"; }
void IfcCurveStyle::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCurveStyle, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_CurveFont = IfcCurveFontOrScaledCurveFontSelect::createObjectFromSTEP( args[1], map );
	m_CurveWidth = IfcSizeSelect::createObjectFromSTEP( args[2], map );
	m_CurveColour = IfcColour::createObjectFromSTEP( args[3], map );
	m_ModelOrDraughting = IfcBoolean::createObjectFromSTEP( args[4], map );
}
void IfcCurveStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPresentationStyle::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "CurveFont", m_CurveFont ) );
	vec_attributes.emplace_back( std::make_pair( "CurveWidth", m_CurveWidth ) );
	vec_attributes.emplace_back( std::make_pair( "CurveColour", m_CurveColour ) );
	vec_attributes.emplace_back( std::make_pair( "ModelOrDraughting", m_ModelOrDraughting ) );
}
void IfcCurveStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPresentationStyle::getAttributesInverse( vec_attributes_inverse );
}
void IfcCurveStyle::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPresentationStyle::setInverseCounterparts( ptr_self_entity );
}
void IfcCurveStyle::unlinkFromInverseCounterparts()
{
	IfcPresentationStyle::unlinkFromInverseCounterparts();
}
